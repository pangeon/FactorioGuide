#include <iostream>
#include <vector>
#include <map>
#include "../tools.hpp"
#include "Creature.hpp"

using namespace std;

using int_255 = unsigned char;

class Splitter 
{
    Creature creature;
    float speed;
    map<string, float> acid_projectile;
    map<string, float> acid_puddle;

    public:
        Splitter(
            Creature base_properties,
            float move_speed
        );
        Splitter();

        void set_base_properties(Creature b_creature);
        void set_speed(float move_speed);
        void add_acid_projectile_info(float attack_speed, float area_of_effect_size, int_255 damage);
        void add_acid_puddle_info(int_255 lifetime, float damage, int_255 movement_speed_modifier, int_255 duration);

        vector<string> info_about_splitter();
        void print_info_about_splitter();

};