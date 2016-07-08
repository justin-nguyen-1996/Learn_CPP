/*
    Author:  Justin Nguyen
    Created: 7/8/2016
*/

#include <iostream>
#include <vector>

int binarySearch(std::vector<int> num_list, int target, int max, int min) {
    int mid = min + (max - min) / 2;
    
    if (num_list[mid] > target) {
        return binarySearch()
    } else if (num_list[mid] < target) {
        
    } else { // num_list[mid] == target
        return mid;
    }
}

int main() {

}

