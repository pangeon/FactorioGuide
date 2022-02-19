#include <iostream>
#include <map>
#include "tools.hpp"
#include "RecipesList.hpp"

using namespace std;

list<Recipe> init_recipes_data() 
{
    // !TODO: maybe function add_all in RecipesList, this seems too complicated 
    list<Recipe> recipes_list = {
        Recipe("Iron plate", 3.2, {{"Iron ore", 1}}),
        Recipe("Copper plate", 3.2, {{"Copper ore", 1}}),
        Recipe("Iron gear wheel", 0.5, {{"Iron plate", 2}}),
        Recipe("Stone furnace", 0.5, {{"Stone", 5}}),
        Recipe("Burner mining drill", 2.0,
        {
            {"Iron gear wheel", 3}, 
            {"Copper plate", 3}
        }) 
    };
    return recipes_list;
}
void show_recipes() 
{
    RecipesList basic_list("Basic List", init_recipes_data());
    basic_list.show_recipes_list();
}
void welcome_menu() 
{
    print("\n>>> Welcome in Factorio Guide <<<\n\n");

    print("---------------------------------\n");
    println("Select command:");
    println("0. Exit");
    println("1. Recipes");
    println("2. Technologies");
    println("3. Enemies");
    print("--------------------------------\n");
}
int menu_choice(int user_choice) 
{
    welcome_menu();
    switch (user_choice) 
    {
        case 0:
            println("You leave application. Good Bay !");
            return 0;
        case 1:
            println("Recipes list below:");
            show_recipes();
            return 1;
        case 2:
            println("Display technology tree below:");
            return 2;
        case 3:
            println("Show kind of your enemies below:");
            return 3;
        default:
            println("Program error");
            break;
    }
    return -1;
}

int user_choice = -1;

int main() 
{
    welcome_menu();
    while(user_choice != 0) 
    {
        cin >> user_choice;
        user_choice = menu_choice(user_choice);
    }
    return 0;
}