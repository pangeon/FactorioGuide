#include "Recipe.hpp"
#include "tools.hpp"

Recipe::Recipe(string name_t) 
{
    name_of_tool = name_t;
}
Recipe::Recipe(string name_t, float p_time, map<string, unsigned short int> m_consuming) 
{
    name_of_tool = name_t;
    production_time = p_time;
    materials_consuming = m_consuming;
}
void Recipe::add_material(string name_of_material, unsigned short int consuming_amount) 
{
    materials_consuming.insert({name_of_material, consuming_amount});
}
void Recipe::add_production_time(float p_time) {
    production_time = p_time;
}
void Recipe::show_recipe() {
    print("Tools name: ");
    println(name_of_tool);
    print("Production time: ");
    print_round(production_time, 2);
    println("Materials: ");
    print_map_items(materials_consuming);
    println("");
}