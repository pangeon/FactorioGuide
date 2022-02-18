#include <iostream>
#include <map>
#include "tools.hpp"
#include "RecipesList.hpp"

using namespace std;

list<Recipe> init_recipes_data() 
{
    Recipe r_1("Iron plate", 3.2, {{"Iron ore", 1}});
    Recipe r_2("Copper plate", 3.2, {{"Copper ore", 1}});
    Recipe r_3("Iron gear wheel", 0.5, {{"Iron plate", 2}});
    Recipe r_4("Stone furnace", 0.5, {{"Stone", 5}});
    Recipe r_5("Burner mining drill", 2.0, 
    {
        {"Iron gear wheel", 3}, 
        {"Copper plate", 3}
    });
    // !TODO: maybe function add_all in RecipesList
    list<Recipe> recipes_list = {r_1, r_2, r_3, r_4, r_5};
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