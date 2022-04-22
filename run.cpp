#include <iostream>
#include <map>
#include <vector>
#include "tools.hpp"
#include "recipes/recipes_read_data.hpp"
#include "enemies/creatures_read_data.hpp"
#include "technologies/technologies_data.hpp"
#include "extras/ascii_image.hpp"

using namespace std;

auto welcome_menu() -> void
{
    show_banner();

    print("---------------------------------\n");
    println("Select command:");
    println("0. Exit");
    println("1. Recipes");
    println("2. Technologies");
    println("3. Enemies");
    print("--------------------------------\n");
}
auto submenu_recipes_info() -> void
{
    println("Recipes -- select list:");
    print("---------------------------------\n");
    println("0. Cancel");
    println("1. Production");
    println("2. Logistics");
    println("3. Intermediate products");
    println("4. Combat");
    print("--------------------------------\n");
}
auto submenu_technologies_info() -> void
{
    println("Technologies -- select list:");
    print("---------------------------------\n");
    println("0. Cancel");
    println("1. Machines");
    println("2. Military/Weaponry");
    println("3. Bonuses");
    println("4. Player augmentation");
    println("5. Defense");
    println("6. Crafting");
    println("7. Transportation");
    println("8. Equipment modules");
    println("9. Modules");
    println("10. Navigation");
    print("--------------------------------\n");
}
auto submenu_enemies_info() -> void
{
    println("Enemies -- select list:");
    print("---------------------------------\n");
    println("0. Cancel");
    println("1. Biters");
    println("2. Spitters");
    println("3. Worms");
    print("--------------------------------\n");
}
auto three_lvl_production_recipes_menu() -> void
{
    println(":: Production ::\n");
    println("0. Cancel");
    println("1. Tools");
    println("2. Electricity");
    println("3. Resource extraction");
    println("4. Furnaces");
    println("5. Fabrication");
    println("6. Modules");
    println("7. Space related");  
}
auto three_lvl_logistic_recipes_menu() -> void
{
    println(":: Logistics ::\n");
    println("0. Cancel");
    println("1. Storage");
    println("2. Belt transport system");
    println("3. Inserters");
    println("4. Energy and pipe distribution");
    println("5. Railway");
    println("6. Transport");
    println("7. Logistic network");
    println("8. Circuit network");
    println("9. Terrain");
}
auto three_lvl_intermediate_products_recipes_menu() -> void
{
    println(":: Intermediate Products ::\n");
    println("0. Cancel");
    println("1. Fluids");
    println("2. Materials");
    println("3. Crafting components");
    println("4. Science packs");
} 
auto three_lvl_combat_recipes_menu() -> void
{
    println(":: Combat ::\n");
    println("0. Cancel");
    println("1. Weapons");
    println("2. Ammo");
    println("3. Capsules");
    println("4. Armor");
    println("5. Equipment modules");
    println("6. Combat equipment");
    println("7. Defense");
} 
auto menu_choice(int user_choice) -> int
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
auto submenu_recipes_choice(int user_next_choice) -> int
{
    switch (user_next_choice)
    {
        case 0:
            println("You leave recipes lists.");
            welcome_menu();
            return 0;
        case 1:
            println("Enter production items lists.");
            return 1;
        case 2:
            println("Enter logistics items lists.");
            return 2;
        case 3:
            println("Enter intermediate products items lists.");
            return 3;
        case 4:
            println("Enter combat items lists.");
            return 4;
        default:
            println("Program error");
            break;
    }
    return -1; 
}
auto submenu_technologies_choice(int user_next_choice) -> int
{
    switch (user_next_choice)
    {
        case 0:
            println("You leave technologies lists.");
            welcome_menu();
            return 0;
        case 1:
            println("Enter machines research");
            Machines::get_technologies().print_technology_list();
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        case 4:
            return 4;
        case 5:
            return 5;
        case 6:
            return 6;
        case 7:
            return 7;
        case 8:
            return 8;
        case 9:
            return 9;
        case 10:
            return 10;
        default:
            println("Program error");
            break;
    }
    return -1; 
}
auto submenu_enemies_choice(int user_next_choice) -> int 
{
    switch (user_next_choice)
    {
        case 0:
            println("You leave enemies lists.");
            welcome_menu();
            return 0;
        case 1:
            println("Information about Biters");
            show_biters();
            return 1;
        case 2:
            println("Information about Spitters");
            show_spitters();
            return 2;
        case 3:
            println("Information about Worms");
            show_worms();
            return 3;
        default:
            println("Program error");
            break;
    }
    return -1; 
}
auto main() -> int
{
    short int user_choice{-1}; 
    
    // ---> CHOOSE MAIN OPTION
    welcome_menu();
    while(user_choice != 0) 
    {
        cin >> user_choice;
        user_choice = menu_choice(user_choice);
        short int user_next_choice{-1};

        // ---> CHOOSE RECIPES LIST
        while(user_choice == 1 and user_next_choice != 0) 
        {
            submenu_recipes_info();
            cin >> user_next_choice;
            user_next_choice = submenu_recipes_choice(user_next_choice);

            short int user_third_choice{-1};

            // ---> CHOOSE RECIPES TYPE PRODUCTION
            while(user_next_choice == 1 and user_third_choice != 0)
            {
                three_lvl_production_recipes_menu();
                cin >> user_third_choice;
                show_production_items(user_third_choice);
            }

            while(user_next_choice == 2 and user_third_choice != 0)
            {
                three_lvl_logistic_recipes_menu();
                cin >> user_third_choice;
                show_logistic_items(user_third_choice);
            }

            while(user_next_choice == 3 and user_third_choice != 0)
            {
                three_lvl_intermediate_products_recipes_menu();
                cin >> user_third_choice;
                show_intermediate_products_items(user_third_choice);
            }
            
            while(user_next_choice == 4 and user_third_choice != 0)
            {
                three_lvl_combat_recipes_menu();
                cin >> user_third_choice;
                show_combat_items(user_third_choice);
            }
        }

        // ---> CHOOSE TECHNOLOGIES LIST
        while(user_choice == 2 and user_next_choice != 0)
        {
            submenu_technologies_info();
            cin >> user_next_choice;
            user_next_choice = submenu_technologies_choice(user_next_choice);
        }

        // ---> CHOOSE ENEMIES LIST
        while(user_choice == 3 and user_next_choice != 0)
        {
            submenu_enemies_info();
            cin >> user_next_choice;
            user_next_choice = submenu_enemies_choice(user_next_choice);
        }
    }
    return 0;
}