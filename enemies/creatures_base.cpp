#include <iostream>
// #include "Creature.hpp"
#include "Bitter.hpp"

using namespace std;

int main()
{
    Creature small_bitter_criteria = 
        Creature(
            "Small Biter",                                            // Name
            "Weakest of biters, can be easily killed with a pistol.", // Description
            15,                                                       // Health
            1                                                         // Range
        );

    Bitter small_bitter_enemy = 
        Bitter(
            small_bitter_criteria, 
            7,                                                        // Damage
            1.71,                                                     // Attack speed
            42.3,                                                     // Speed 
            4                                                         // Pollution to join attack
        );
}