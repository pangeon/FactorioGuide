#include "Splitter.hpp"

Splitter::Splitter(Creature base_properties, float move_speed) 
{
    creature = base_properties;
    speed = move_speed;
}
Splitter::Splitter() {}

void Splitter::set_base_properties(Creature s_creature) { creature = s_creature; }
void Splitter::set_speed(float move_speed) { speed = move_speed; };
void Splitter::add_acid_projectile_info(float attack_speed, float area_of_effect_size, int_255 damage) 
{
    acid_projectile.insert({"Attack speed", attack_speed});
    acid_projectile.insert({"Area of effect size", area_of_effect_size});
    acid_projectile.insert({"Damage on contact", damage});
}
void Splitter::add_acid_puddle_info(int_255 lifetime, float damage, int_255 movement_speed_modifier, int_255 duration) 
{
    acid_puddle.insert({"Lifetime", lifetime});
    acid_puddle.insert({"Damage", damage});
    acid_puddle.insert({"Movement/vehicle speed modifier", movement_speed_modifier});
    acid_puddle.insert({"Duration", duration});
}
string second_elem_in_map_pair_to_string(map<string, float> map_, string _elem)
{
    return to_string(map_.find(_elem) -> second);
}

// TODO: It's working but look very ugly !
vector<string> Splitter::info_about_splitter() 
{
    vector<string> all_about_splitter;

    for(int i = 0; i < creature.info_about_base_properties().size(); i++)
    {
        all_about_splitter.push_back(
            creature.info_about_base_properties()[i]
        );
    }
    all_about_splitter.push_back("   3. --- speed: " + to_string(speed));

    all_about_splitter.push_back("   * Acid projectile");
    all_about_splitter.push_back(
        "      1. --- Attack speed: " + 
        second_elem_in_map_pair_to_string(acid_projectile, "Attack speed")
    );
    all_about_splitter.push_back(
        "      2. --- Area of effect size: " + 
        second_elem_in_map_pair_to_string(acid_projectile, "Area of effect size")
    );
    all_about_splitter.push_back(
        "      3. --- Damage on contact: " + 
        second_elem_in_map_pair_to_string(acid_projectile, "Damage on contact")
    );

    all_about_splitter.push_back("   * Acid puddle");
    all_about_splitter.push_back(
        "      1. --- Lifetime: " + 
        second_elem_in_map_pair_to_string(acid_puddle, "Lifetime")
    );
    all_about_splitter.push_back(
        "      2. --- Damage: " + 
        second_elem_in_map_pair_to_string(acid_puddle, "Damage")
    );
    all_about_splitter.push_back(
        "      3. --- Movement/vehicle speed modifier: " + 
        second_elem_in_map_pair_to_string(acid_puddle, "Movement/vehicle speed modifier") + "%"
    );
    all_about_splitter.push_back(
        "      4. --- Duration: " + 
        second_elem_in_map_pair_to_string(acid_puddle, "Duration")
    );

    return all_about_splitter;
}
void Splitter::print_info_about_splitter() {
    for(auto property : info_about_splitter()) 
    {
        println(property);
    }
    println("--------------------");
}
