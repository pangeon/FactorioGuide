#include "Bitter.hpp"

Bitter::Bitter(Creature b_creature, int_255 b_damage, float a_speed, float move_speed, int_65535 poj_attack) 
{
    creature = b_creature;
    damage = b_damage;
    attack_speed = a_speed;
    speed = move_speed;
    pollution_to_join_attack = poj_attack;
}
    

