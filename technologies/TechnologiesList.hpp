#pragma once

#include <list>
#include "Technology.hpp"
#include "../tools.hpp"

using namespace std;

class TechnologiesList 
{
    string technology_group_name;
    list<Technology> technology_group;

    public:
        TechnologiesList(string t_technology_group_name);
        string get_technology_name();
        list<Technology> get_technology_group(); 
        void add_technology_to_list(Technology technology_item);
        void print_technology_list();
};