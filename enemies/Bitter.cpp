#include "Bitter.hpp"
#include "../tools.hpp"
#include <cmath>

Bitter::Bitter(Creature base_properties, int_255 b_damage, float a_speed, float move_speed, int_65535 poj_attack) 
{
    creature = base_properties;
    damage = b_damage;
    attack_speed = a_speed;
    speed = move_speed;
    pollution_to_join_attack = poj_attack;
}
Bitter::Bitter() {};
void Bitter::set_base_properties(Creature b_creature) { creature = b_creature; }
void Bitter::set_damage(int_255 b_damage) { damage = b_damage; }
void Bitter::set_attack_speed(float a_speed) { attack_speed = a_speed; }
void Bitter::set_speed(float move_speed) { speed = move_speed; }
void Bitter::set_polllution_to_join_atack(int_65535 poj_attack) { pollution_to_join_attack = poj_attack; }

vector<string> Bitter::info_about_bitter() 
{
    vector<string> all_about_bitter;

    for(int i = 0; i < creature.info_about_base_properties().size(); i++)
    {
        all_about_bitter.push_back(
            creature.info_about_base_properties()[i]
        );
    }
    all_about_bitter.push_back("   3. --- damage: " + to_string(damage));
    all_about_bitter.push_back("   4. --- atack speed: " + to_string(attack_speed));
    all_about_bitter.push_back("   5. --- speed: " + to_string(speed));
    all_about_bitter.push_back("   6. --- pollution to join attack: " + to_string(pollution_to_join_attack));

    return all_about_bitter;
}
void Bitter::print_info_about_bitter() {
    for(auto property : info_about_bitter()) 
    {
        println(property);
    }
    println("--------------------");
}
    

