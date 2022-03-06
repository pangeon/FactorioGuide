#include "recipes_read_data.hpp"

// PRODUCTION
list<Recipe> init_production_items_data() 
{
    list<Recipe> recipes_list = 
    {
        // Tools
        Recipe("Repair pack", 0.5, 
        {
            {"Electronic circuit", 2}, 
            {"Iron gear wheel", 2}
        }),

        // Electricity
        Recipe("Boiler", 0.5, 
        {
            {"Pipe", 4},
            {"Stone furnace", 1}
        }),
        Recipe("Steam engine", 0.5, 
        {
            {"Iron gear wheel", 8},
            {"Iron plate", 10},
            {"Pipe", 5}
        }),
        Recipe("Solar panel", 10, 
        {
            {"Copper plate", 5},
            {"Electronic circuit", 15},
            {"Steel plate", 5}
        }),
        Recipe("Accumulator", 10, 
        {
            {"Battery", 5},
            {"Iron plate", 2}
        }),
        Recipe("Nuclear reactor", 8, 
        {
            {"Advanced circuit", 500},
            {"Concrete", 500},
            {"Copper plate", 500},
            {"Steel plate", 500}
        }),
        Recipe("Heat pipe", 1, 
        {
            {"Copper plate", 20},
            {"Steel plate", 10}
        }),
        Recipe("Heat exchanger", 3, 
        {
            {"Copper plate", 100},
            {"Pipe", 10},
            {"Steel plate", 10}
        }),
        Recipe("Steam turbine", 3, 
        {
            {"Copper plate", 50},
            {"Iron gear wheel", 50},
            {"Pipe", 20},
        }),

        // Resource extraction 
        Recipe("Burner mining drill", 2.0,
        {
            {"Iron gear wheel", 3}, 
            {"Copper plate", 3}
        }),
        Recipe("Electric mining drill", 2, 
        {
            {"Electronic circuit", 3},
            {"Iron gear wheel", 5},
            {"Iron plate", 10},
        }),
        Recipe("Offshore pump", 0.5, 
        {
            {"Electronic circuit", 2},
            {"Iron gear wheel", 1},
            {"Pipe", 1},
        }),
        Recipe("Pumpjack", 5, 
        {
            {"Electronic circuit", 5},
            {"Iron gear wheel", 10},
            {"Pipe", 10},
            {"Steel plate", 5},
        }),

        // Furnaces
        Recipe("Stone furnace", 0.5, {{"Stone", 5}}),
        Recipe("Steel furnace", 3, 
        {
            {"Steel plate", 6},
            {"Stone brick", 10},
        }),
        Recipe("Electric furnace", 5, 
        {
            {"Advanced circuit", 5},
            {"Steel plate", 10},
            {"Stone brick", 10},
        }),

        // Production
        Recipe("Assembling machine 1", 0.5, 
        {
            {"Electronic circuit", 3},
            {"Iron gear wheel", 5},
            {"Iron plate", 9},
        }),
        Recipe("Assembling machine 2", 0.5, {
            {"Assembling machine 1", 1},
            {"Electronic circuit", 3},
            {"Iron gear wheel", 5},
            {"Steel plate", 2},
        }),
        Recipe("Assembling machine 3", 0.5, 
        {
            {"Assembling machine 2", 2},
            {"Speed module", 4},
        }),
        Recipe("Oil refinery", 8, 
        {
            {"Electronic circuit", 10},
            {"Iron gear wheel", 10},
            {"Pipe", 10},
            {"Steel plate", 15},
            {"Stone brick", 10},
        }),
        Recipe("Chemical plant", 5, 
        {
            {"Electronic circuit", 5},
            {"Iron gear wheel", 5},
            {"Pipe", 5},
            {"Steel plate", 5},
        }),
        Recipe("Centrifuge", 4, 
        {
            {"Advanced circuit", 100},
            {"Concrete", 100},
            {"Iron gear wheel", 100},
            {"Steel plate", 50},
        }),
        Recipe("Lab", 2, 
        {
            {"Electronic circuit", 10},
            {"Iron gear wheel", 10},
            {"Transport belt", 4},
        }),

        // Modules

        // Recipe("", 1, 
        // {
        //     {"", 1},
        //     {"", 1},
        // }),

        // Space related
    };
    return recipes_list;
}

// LOGISTICS
list<Recipe> init_logistics_items_data() 
{
    list<Recipe> recipes_list = 
    {
        // Storage
        Recipe("Wooden chest", 0.5, {{"Wood", 2}}),
        Recipe("Iron chest", 0.5, {{"Iron plate", 6}}),
        Recipe("Steal chest", 0.5, {{"Steal plate", 8}}),
        Recipe("Storage tank", 3, 
        {
            {"Iron plate", 20},
            {"Steal plate", 5}
        }),

        // Belt transport system
        // Inserters

        // Energy & pipe distribution
        Recipe("Small electric pole", 0.5, 
        {
            {"Cooper cable", 2},
            {"Wood", 1}
        }),

        // Railway
        // Transport
        // Circuit network
        // Terrain
    };
    return recipes_list;
}

// INTERMEDIATE PRODUCTS
list<Recipe> init_intermediate_products_data() 
{
    list<Recipe> recipes_list = 
    {
        // Fluids
        // Materials
        Recipe("Iron plate", 3.2, {{"Iron ore", 1}}),
        Recipe("Copper plate", 3.2, {{"Copper ore", 1}}),

        // Crafting components
        Recipe("Cooper cable", 0.5, {{"Copper plate", 1}}),
        Recipe("Iron gear wheel", 0.5, {{"Iron plate", 2}}),
        Recipe("Iron stick", 0.5, {{"Iron plate", 1}}),
        Recipe("Electronic circuit", 0.5, 
        {
            {"Cooper cable", 3},
            {"Iron plate", 1}
        }), 
        
        // Science packs
        Recipe("Automation science pack", 5, {
            {"Copper plate", 1},
            {"Iron gear wheel", 1},
        }),
    };
    return recipes_list;
}

// COMBAT
list<Recipe> init_combat_items_data() 
{
    list<Recipe> recipes_list = 
    {
        // Weapons
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

        // Ammo
        // Capsules
        // Armor
        // Equipment modules
        // Combat equipment
        // Defense
    };
    return recipes_list;
}

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