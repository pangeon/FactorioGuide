#include "RecipesList.hpp"
#include <iostream>
#include "../tools.hpp"


RecipesList::RecipesList() {}
RecipesList::RecipesList(string l_name)
{
    list_name = l_name;
}
RecipesList::RecipesList(string l_name, list<Recipe> l_recipes)
{
    list_name = l_name;
    recipes = l_recipes;
}
string RecipesList::get_name() 
{
    return list_name;
}
void RecipesList::add_recipe(Recipe recipe) 
{    
    RecipesList::recipes.push_back(recipe);
}
list<Recipe> RecipesList::get_recipes_list() 
{
    return RecipesList::recipes;
}
void RecipesList::show_recipes_list() 
{
    for(Recipe recipe : RecipesList::recipes) {
        recipe.show_recipe();
    }
}