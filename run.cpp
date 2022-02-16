#include <iostream>
#include "tools.hpp"

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
    switch (user_choice) 
    {
        case 0:
            println("You leave application. Good Bay !");
            return 0;
        case 1:
            println("Recipes list below:");
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