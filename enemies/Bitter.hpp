#include <iostream>
#include <vector>
#include "Creature.hpp"

using namespace std;

using int_255 = unsigned char;
using int_65535 = unsigned short int;

class Bitter 
{
    Creature creature;
    int_255 damage;
    float attack_speed;
    float speed;
    int_65535 pollution_to_join_attack;

    public:
        Bitter(
            Creature base_properties, 
            int_255 b_damage, 
            float a_speed, 
            float move_speed, 
            int_65535 poj_attack
        );
        Bitter();
        
        void set_base_properties(Creature b_creature);
        void set_damage(int_255 b_damage);
        void set_attack_speed(float a_speed);
        void set_speed(float move_speed);
        void set_polllution_to_join_atack(int_65535 poj_attack);

        vector<string> info_about_bitter();
        void print_info_about_bitter();
};