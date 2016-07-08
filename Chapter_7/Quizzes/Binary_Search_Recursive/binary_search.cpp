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

}

