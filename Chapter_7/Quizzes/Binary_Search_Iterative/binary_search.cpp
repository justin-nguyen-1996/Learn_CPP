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
    while(1) {
        if (num_list[midpt] > target) {
            hi = midpt - 1;
        } else if (num_list[midpt] < target) {
            lo = midpt + 1;
        } else { // num_list == target
            return midpt;
        }
        
        midpt = (hi - lo) / 2;
    }
}

int main() {

}
