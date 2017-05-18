/*
    Author:  Justin Nguyen
    Created: 7/8/2016
*/

#include <iostream>
#include <vector>

int binarySearch(std::vector<int> num_list, int target, int max, int min) {
    if (min > max) { return -1; }
    
    int mid = min + (max - min) / 2;
    
    if (num_list[mid] > target) {
        return binarySearch(num_list, target, mid - 1, min);
    } else if (num_list[mid] < target) {
        return binarySearch(num_list, target, max, mid + 1);
    } else { // num_list[mid] == target
        return mid;
    }
}

int main() {
    std::vector<int> num_list
        { -4, -1, 14, 39, 40, 100 };
    std::vector<int> target_list
        { -100, -4, 0, -1, 100, 40, 120};
    
    for (const auto target : target_list) {
        int index = binarySearch(num_list, target, num_list.size() - 1, 0);
        if (index == -1) {
            std::cout << "Binary Search could not find " << target << "\n";
        } else {
            std::cout << "Binary Search found " << target 
                      << " at index " << index << "\n";
        }
    }
}

