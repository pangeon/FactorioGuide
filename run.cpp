#include <iostream>
#include <map>
#include <vector>
#include "tools.hpp"
#include "RecipesList.hpp"
#include "recipes_reader.hpp"

using namespace std;

short int user_choice = -1;

// !TODO: maybe function add_all in RecipesList, this seems too complicated

// PRODUCTION
list<Recipe> init_production_items_data() 
{
    list<Recipe> recipes_list = 
    {
        Recipe("Stone furnace", 0.5, {{"Stone", 5}}),
        Recipe("Burner mining drill", 2.0,
        {
            {"Iron gear wheel", 3}, 
            {"Copper plate", 3}
        }),
        // Recipe("", 1, {{"", 1}})
    };
    return recipes_list;
}

// LOGISTICS
list<Recipe> init_logistics_items_data() 
{
    list<Recipe> recipes_list = 
    {
        Recipe("Small electric pole", 0.5, 
        {
            {"Cooper cable", 2},
            {"Wood", 1}
        }),
        Recipe("Wooden chest", 0.5, {{"Wood", 2}}),
        Recipe("Iron chest", 0.5, {{"Iron plate", 6}}),
        Recipe("Steal chest", 0.5, {{"Steal plate", 8}}),
        Recipe("Storage tank", 3, 
        {
            {"Iron plate", 20},
            {"Steal plate", 5}
        })
        // Recipe("", 1, {{"", 1}})
    };
    return recipes_list;
}

// INTERMEDIATE PRODUCTS
list<Recipe> init_intermediate_products_data() 
{
    list<Recipe> recipes_list = 
    {
        Recipe("Iron plate", 3.2, {{"Iron ore", 1}}),
        Recipe("Copper plate", 3.2, {{"Copper ore", 1}}),
        Recipe("Iron gear wheel", 0.5, {{"Iron plate", 2}}),
        Recipe("Cooper cable", 0.5, {{"Copper plate", 1}}),
        Recipe("Electronic circuit", 0.5, 
        {
            {"Cooper cable", 3},
            {"Iron plate", 1}
        }), 
        Recipe("Automation science pack", 5, {
            {"Copper plate", 1},
            {"Iron gear wheel", 1},
        }),
        Recipe("Iron stick", 0.5, {{"Iron plate", 1}}) 
        // Recipe("", 1, {{"", 1}}) 
    };
    return recipes_list;
}

// COMBAT
list<Recipe> init_combat_items_data() 
{
    list<Recipe> recipes_list = 
    {
        Recipe("Pistol", 5, 
        {
            {"Copper plate", 5},
            {"Iron plate", 5},
        }),
        Recipe("Submachine gun", 10, 
        {
            {"Copper plate", 5},
            {"Iron gear wheel", 10},
            {"Iron plate", 10},
        }),
        // Recipe("", 1, {{"", 1}})
    };
    return recipes_list;
}

// !TODO: maybe show each group of items separately
void show_all_recipes() 
{
    RecipesList production_items("Production items", init_production_items_data());
    RecipesList logistics_items("Logitics items", init_logistics_items_data());
    RecipesList intermediate_products("Intermediate products", init_intermediate_products_data());
    RecipesList combat_items("Combat items", init_combat_items_data());
    
    println("-- PRODUCTION -- \n");
    production_items.show_recipes_list();

    println("-- LOGISTICS -- \n");
    logistics_items.show_recipes_list();

    println("-- INTERMEDIATE PRODUCTS -- \n");
    intermediate_products.show_recipes_list();

    println("-- COMBAT -- \n");
    combat_items.show_recipes_list();
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
            show_all_recipes();
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

// TEST
void test()
{
    vector<string> data = get_items_names_from_file_line();
    vector<float> f_data = get_item_production_time_from_file_line();
    vector<string> m_data = get_item_production_resource_from_file_line();

    RecipesList recipes_list("list");
    for (int i = 0; i < 2; i++) {
        recipes_list.add_recipe(Recipe(data[i], f_data[i], map<string, unsigned short int>()));
        println(m_data[i]);
    }
    // recipes_list.show_recipes_list();
}
// TEST

int main() 
{
    //test();
    welcome_menu();
    while(user_choice != 0) 
    {
        cin >> user_choice;
        user_choice = menu_choice(user_choice);
    }
    return 0;
}