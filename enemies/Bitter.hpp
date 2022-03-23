#include <iostream>
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
            Creature creature, 
            int_255 b_damage, 
            float a_speed, 
            float move_speed, 
            int_65535 poj_attack
        );

        int_255 get_damage();
        void set_damage();

        float get_attack_speed();
        void set_attack_speed();

        float get_speed();
        void set_speed();

        int_65535 get_polllution_to_join_atack();
        void set_polllution_to_join_atack();
};