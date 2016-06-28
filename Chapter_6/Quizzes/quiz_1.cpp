/*
    Author:  Justin Nguyen
    Created: 6/28/16
*/

/* Player can hold 3 types of items: health potions, torches, and arrows. 
   Create an enum to identify the different types of items. 
   Create a fixed array to store the number of each item the player is carrying 
   The player should start with 2 health potions, 5 torches, and 10 arrows. 
   Write a function called countTotalItems() that returns how many items the player has in total. 
   Have your main() function print the output of countTotalItems(). */

#include <iostream>

enum class ItemTypes {
    HEALTH_POTIONS,
    TORCHES,
    ARROWS
};

int countTotalItems(ItemTypes& items_list) {
    int sum = 0;
    for (int item_count : items_list) {
        sum += item_count;
    }
    
    return sum;
}

int main() {
    ItemTypes items_list[3] {2,5,10};
    std::cout << "The player has " countTotalItems(items_list) << " many items\n";
}

