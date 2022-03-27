#include <iostream>
#include "Bitter.hpp"

using namespace std;

int main()
{
    // SMALL BITER
    Creature small_bitter_properties; 
    small_bitter_properties.set_name("Small Biter");
    small_bitter_properties.set_desc("\n\tWeakest of biters, can be easily killed with a pistol.");
    small_bitter_properties.set_health(15);
    small_bitter_properties.set_range(1);

    Bitter small_bitter;
    small_bitter.set_base_properties(small_bitter_properties);
    small_bitter.set_damage(7);
    small_bitter.set_attack_speed(1.71);
    small_bitter.set_speed(42.3);
    small_bitter.set_polllution_to_join_atack(4);

    small_bitter.print_info_about_bitter();

    // MEDIUM BITER
    Creature medium_bitter_properties; 
    medium_bitter_properties.set_name("Medium Biter");
    medium_bitter_properties.set_desc("\n\tStronger and slightly faster than the small biter. \n\tCan pose a problem for and even kill weaker players.");
    medium_bitter_properties.set_health(15*5);
    medium_bitter_properties.set_range(1);

    Bitter medium_bitter;
    medium_bitter.set_base_properties(medium_bitter_properties);
    medium_bitter.set_damage(7+8);
    medium_bitter.set_attack_speed(1.71);
    medium_bitter.set_speed(51.8);
    medium_bitter.set_polllution_to_join_atack(4*5);

    medium_bitter.print_info_about_bitter();

    // BIG BITER
    Creature big_bitter_properties; 
    big_bitter_properties.set_name("Big Biter");
    big_bitter_properties.set_desc("\n\tDangerous, resistant to small arms. Can attack through walls, \n\thitting objects directly behind them.");
    big_bitter_properties.set_health(15*5*5);
    big_bitter_properties.set_range(1*2);

    Bitter big_bitter;
    big_bitter.set_base_properties(big_bitter_properties);
    big_bitter.set_damage((7+8)*2);
    big_bitter.set_attack_speed(1.71);
    big_bitter.set_speed(49.7);
    big_bitter.set_polllution_to_join_atack(4*5*4);

    big_bitter.print_info_about_bitter();

    // BEHEMOTH BITER
    Creature behemoth_bitter_properties; 
    behemoth_bitter_properties.set_name("Behemoth Biter");
    behemoth_bitter_properties.set_desc("\n\tExtremely durable and nearly immune to small arms, except for the strongest ordnance. \n\tCan attack through walls, hitting objects directly behind them.");
    behemoth_bitter_properties.set_health(15*5*5*10);
    behemoth_bitter_properties.set_range(1*2);

    Bitter behemoth_bitter;
    behemoth_bitter.set_base_properties(behemoth_bitter_properties);
    behemoth_bitter.set_damage(((7+8)*2)*3);
    behemoth_bitter.set_attack_speed(1.2);
    behemoth_bitter.set_speed(64.8);
    behemoth_bitter.set_polllution_to_join_atack(4*5*4*5);

    behemoth_bitter.print_info_about_bitter();

}