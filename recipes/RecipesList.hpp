#pragma once

#include "Recipe.hpp"
#include <list>

using namespace std;

// !TODO: maybe add more math logic ex. time sum, avg, material consuming convertion. 
class RecipesList 
{
    string list_name;
    list<Recipe> recipes;

    public:
        RecipesList();
        RecipesList(string list_name);
        RecipesList(string list_name, list<Recipe> recipes);
        
        list<Recipe> get_recipes_list(); // !TODO: it's neccessary !

        string get_name(); 
        void add_recipe(Recipe recipe);
        void show_recipes_list();

};