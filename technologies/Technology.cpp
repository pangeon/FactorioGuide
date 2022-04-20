#include "Technology.hpp"

using namespace std;

Technology::Technology (
    string t_name, 
    vector<string> t_required_technologies,
    vector<string> t_unlocked_effects,
    vector<string> t_unlocked_recipes
) 
{
    name = t_name;
    required_technologies = t_required_technologies;
    unlocked_effects = t_unlocked_effects;
    unlocked_recipes = t_unlocked_recipes;
}
void Technology::add_technology_cost(pair<string, int> cost_parameter)
{
    cost.insert(cost_parameter);
}
void Technology::print_info_about_technlogies() 
{
    println(uppercase(">> " + name));
    print_map_items(cost);
    print_vector_items(required_technologies, "Required technologies:");
    print_vector_items(unlocked_effects, "Unlocked effects:");
    print_vector_items(unlocked_recipes, "Unlocked recipes:");

    println("--------------------");
}

