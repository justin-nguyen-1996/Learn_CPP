/*
    Author:  Justin Nguyen
    Created: 7/8/2016
*/

#include <iostream>
#include <array>

int binarySearch(std::array<int> &num_list, int target) {
    int hi = num_list.size() - 1;
    int lo = 0;
    int midpt = (hi - lo) / 2;
    while (lo <= hi) {
        if (num_list[midpt] > target) {
            hi = midpt - 1;
        } else if (num_list[midpt] < target) {
            lo = midpt + 1;
        } else { // num_list == target
            return midpt;
        }
        
        midpt = (hi - lo) / 2;
    }
    
    return -1;
}

int main() {
    std::array<int,10> num_list
        { 1, 5, 19, 34, 52, 100, 234, 365, 366, 367 };
    std::array<int,10> target_list
        { -1, 0, 1, 34, 35, 235, 234, 234, 267, 5 };
    
    for (const auto &target : target_list) {
        int index = binarySearch(num_list, target);
        std::cout << "List of nums: " << num_list << "\n";
        if (index != -1) {
            std::cout << "Binary Search found " << target 
                      << " at index " << index << "\n";
        } else {
            std::cout << "Element " << target
                      << " is not in the list\n";
        }
    }
}
