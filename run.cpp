#include <iostream>
#include <map>
#include "tools.hpp"
#include "Recipe.hpp"

using namespace std;

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

    Recipe iron_plate("Iron Plate");
    iron_plate.add_production_time(3.2);
    iron_plate.add_material("Iron Ore", 1);

    Recipe copper_plate("Copper plate", 3.2, {{"Copper Ore", 1}});

    switch (user_choice) 
    {
        case 0:
            println("You leave application. Good Bay !");
            return 0;
        case 1:
            println("Recipes list below:");
            iron_plate.show_recipe();
            copper_plate.show_recipe();
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