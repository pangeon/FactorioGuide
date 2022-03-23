#include "Creature.hpp"

Creature::Creature(string c_name, string c_desc, int_65535 c_health, int_255 c_range) 
{
    name = c_name;
    description = c_desc;
    health = c_health;
    range = c_range;
}
Creature::Creature() {}
