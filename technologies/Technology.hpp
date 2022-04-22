#pragma once

#include <iostream>
#include <vector>
#include <map>
#include "../tools.hpp"

using namespace std;

class Technology {
    string name;
    map<string, int> cost;
    vector<string> required_technologies;
    vector<string> unlocked_effects;
    vector<string> unlocked_recipes;

    public:
        Technology (
            string t_name, 
            vector<string> t_required_technologies,
            vector<string> t_unlocked_effects,
            vector<string> t_unlocked_recipes
        );
        void add_technology_cost(pair<string, int> cost_parameter);
        void add_all_technology_costs(map<string, int> cost_parameters);
        void print_info_about_technlogy(); 
};