#include <iostream>
#include <cstring>
#include "Creature.hpp"
#include "../tools.hpp"

using namespace std;

Creature::Creature(string c_name, string c_desc, int_65535 c_health, int_255 c_range) 
{
    name = c_name;
    description = c_desc;
    health = c_health;
    range = c_range;
}
Creature::Creature() {}

void Creature::set_name(string c_name) { name = c_name; }
void Creature::set_desc(string c_desc) { description = c_desc; }
void Creature::set_health(int_65535 c_health) { health = c_health; }
void Creature::set_range(int_255 c_range) { range = c_range; }

vector<string> Creature::info_about_base_properties() 
{
    return vector<string> {
        ">> " + uppercase(name) + " <<", 
        description + "\n", 
        "   1. --- health: " + to_string(health), 
        "   2. --- range: " + to_string(range)
    };
}