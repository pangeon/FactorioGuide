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
        Recipe("Beacon", 15, 
        {
            {"Advanced circuit", 20},
            {"Copper cable", 10},
            {"Electronic circuit", 20},
            {"Steel plate", 10},
        }),
        Recipe("Speed module", 15, 
        {
            {"Advanced circuit", 5},
            {"Electronic circuit", 5},
        }),
        Recipe("Speed module 2", 30, 
        {
            {"Advanced circuit", 5},
            {"Processing unit", 5},
            {"Speed module", 4}
        }),
        Recipe("Speed module 3", 60, 
        {
            {"Advanced circuit", 5},
            {"Processing unit", 5},
            {"Speed module 2", 5}
        }),
        Recipe("Efficiency module", 15, 
        {
            {"Advanced circuit", 5},
            {"Electronic circuit", 5},
        }),
        Recipe("Efficiency module 2", 30, 
        {
            {"Advanced circuit", 5},
            {"Processing unit", 5},
            {"Efficiency module", 4}
        }),
        Recipe("Efficiency module 3", 60, 
        {
            {"Advanced circuit", 5},
            {"Processing unit", 5},
            {"Efficiency module 2", 5}
        }),
        Recipe("Productivity module", 15, 
        {
            {"Advanced circuit", 5},
            {"Electronic circuit", 5},
        }),
        Recipe("Productivity module 2", 30, 
        {
            {"Advanced circuit", 5},
            {"Processing unit", 5},
            {"Productivity module", 4}
        }),
        Recipe("Productivity module 3", 60, 
        {
            {"Advanced circuit", 5},
            {"Processing unit", 5},
            {"Productivity module 2", 5}
        }),
        
        // Space related
        Recipe("Rocket silo", 30, 
        {
            {"Concrete", 1000},
            {"Electric engine unit", 200},
            {"Pipe", 100},
            {"Processing unit", 200},
            {"Steel plate", 1000},
        }),
        Recipe("Satellite", 5, 
        {
            {"Accumulator", 100},
            {"Low density structure", 100},
            {"Processing unit", 100},
            {"Radar", 5},
            {"Rocket fuel", 50},
            {"Solar panel", 100},
        }),
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
        Recipe("Transport belt", 0.5, 
        {
            {"Iron gear wheel", 1},
            {"Iron plate", 1},
        }),
        Recipe("Fast transport belt", 0.5, 
        {
            {"Iron gear wheel", 5},
            {"Transport belt", 1},
        }),
        Recipe("Express transport belt", 0.5, 
        {
            {"Fast transport belt", 1},
            {"Iron gear wheel", 10},
            {"Lubricant", 20},
        }),
        Recipe("Underground belt", 1, 
        {
            {"Iron plate", 10},
            {"Transport belt", 5},
        }),
        Recipe("Fast underground belt", 2, 
        {
            {"Iron gear wheel", 40},
            {"Underground belt", 2},
        }),
        Recipe("Express underground belt", 2, 
        {
            {"Fast underground belt", 2},
            {"Iron gear wheel", 80},
            {"Lubricant", 40},
        }),
        Recipe("Splitter", 1, 
        {
            {"Electronic circuit", 5},
            {"Iron plate", 5},
            {"Transport belt", 4},
        }),
        Recipe("Fast splitter", 2, 
        {
            {"Electronic circuit", 10},
            {"Iron gear wheel", 10},
            {"Splitter", 1},
        }),
        Recipe("Express splitter", 2, 
        {
            {"Advanced circuit", 10},
            {"Fast splitter", 1},
            {"Iron gear wheel", 10},
            {"Lubricant", 80},
        }),
        
        // Inserters
        Recipe("Burner inserter", 0.5, 
        {
            {"Iron gear wheel", 1},
            {"Iron plate", 1},
        }),
        Recipe("Inserter", 0.5, 
        {
            {"Electronic circuit", 1},
            {"Iron gear wheel", 1},
            {"Iron plate", 1},
        }),
        Recipe("Long-handed inserter", 0.5, 
        {
            {"Inserter", 1},
            {"Iron gear wheel", 1},
            {"Iron plate", 1},
        }),
        Recipe("Fast inserter", 0.5, 
        {
            {"Electronic circuit", 2},
            {"Inserter", 1},
            {"Iron plate", 2},
        }),
        Recipe("Filter inserter", 0.5, 
        {
            {"Electronic circuit", 4},
            {"Fast inserter", 1},
        }),
        Recipe("Stack inserter", 0.5, 
        {
            {"Advanced circuit", 1},
            {"Electronic circuit", 15},
            {"Fast inserter", 1},
            {"Iron gear wheel", 15},
        }),
        Recipe("Stack filter inserter", 0.5, 
        {
            {"Electronic circuit", 5},
            {"Stack inserter", 1},
        }),
        
        // Energy & pipe distribution
        Recipe("Small electric pole", 0.5, 
        {
            {"Cooper cable", 2},
            {"Wood", 1}
        }),
        Recipe("Medium electric pole", 0.5, 
        {
            {"Copper plate", 2},
            {"Iron stick", 4},
            {"Steel plate", 2},
        }),
        Recipe("Big electric pole", 0.5, 
        {
            {"Copper plate", 5},
            {"Iron stick", 8},
            {"Steel plate", 5},
        }),
        Recipe("Substation", 0.5, 
        {
            {"Advanced circuit", 5},
            {"Copper plate", 5},
            {"Steel plate", 10},
        }),
        Recipe("Pipe", 0.5, {{"Iron plate", 1}}),
        Recipe("Pipe to ground", 0.5, 
        {
            {"Iron plate", 5},
            {"Pipe", 10},
        }),
        Recipe("Pump", 2, 
        {
            {"Engine unit", 1},
            {"Pipe", 1},
            {"Steel plate", 1},
        }),

        // Railway
        Recipe("Rail", 0.5, 
        {
            {"Iron stick", 1},
            {"Steel plate", 1},
            {"Stone", 1},
        }),
        Recipe("Train stop", 0.5, 
        {
            {"Electronic circuit", 5},
            {"Iron plate", 6},
            {"Iron stick", 6},
            {"Steel plate", 3},
        }),
        Recipe("Rail signal", 0.5, 
        {
            {"Electronic circuit", 1},
            {"Iron plate", 5},
        }),
        Recipe("Rail chain signal", 0.5, 
        {
            {"Electronic circuit", 1},
            {"Iron plate", 5},
        }),
        Recipe("Locomotive", 4, 
        {
            {"Electronic circuit", 10},
            {"Engine unit", 20},
            {"Steel plate", 30},
        }),
        Recipe("Cargo wagon", 1, 
        {
            {"Steel plate", 20},
            {"Iron plate", 20},
            {"Iron gear wheel", 10},
        }),
        Recipe("Fluid wagon", 1.5, 
        {
            {"Iron gear wheel", 10},
            {"Pipe", 8},
            {"Steel plate", 16},
            {"Storage tank", 1},
        }),
        Recipe("Artillery wagon", 4, 
        {
            {"Advanced circuit", 20},
            {"Engine unit", 64},
            {"Iron gear wheel", 10},
            {"Pipe", 16},
            {"Steel plate", 40},
        }),
        // Transport
        Recipe("Car", 2, 
        {
            {"Engine unit", 8},
            {"Iron plate", 20},
            {"Steel plate", 5},
        }),
        Recipe("Tank", 5, 
        {
            {"Advanced circuit", 10},
            {"Engine unit", 32},
            {"Iron gear wheel", 20},
            {"Steel plate", 50},
        }),
        Recipe("Spidertron", 10, 
        {
            {"Efficiency module 3", 2},
            {"Exoskeleton", 4},
            {"Portable fusion reactor", 2},
            {"Low density structure", 150},
            {"Radar", 2},
            {"Raw fish", 1},
            {"Rocket control unit", 16},
            {"Rocket launcher", 4},
        }),
        Recipe("Spidertron remote", 0.5, 
        {
            {"Radar", 1},
            {"Rocket control unit", 1},
        }),

        // Logistic network
        Recipe("Logistic robot", 0.5, 
        {
            {"Advanced circuit", 2},
            {"Flying robot frame", 1},
        }),
        Recipe("Construction robot", 0.5, 
        {
            {"Electronic circuit", 2},
            {"Flying robot frame", 1},
        }),
        Recipe("Active provider chest", 0.5, 
        {
            {"Advanced circuit", 1},
            {"Electronic circuit", 3},
            {"Steel chest", 1},
        }),
        Recipe("Passive provider chest", 0.5, 
        {
            {"Advanced circuit", 1},
            {"Electronic circuit", 3},
            {"Steel chest", 1},
        }),
        Recipe("Storage chest", 0.5, 
        {
            {"Advanced circuit", 1},
            {"Electronic circuit", 3},
            {"Steel chest", 1},
        }),
        Recipe("Buffer chest", 0.5, 
        {
            {"Advanced circuit", 1},
            {"Electronic circuit", 3},
            {"Steel chest", 1},
        }),
        Recipe("Requester chest", 0.5, 
        {
            {"Advanced circuit", 1},
            {"Electronic circuit", 3},
            {"Steel chest", 1},
        }),
        Recipe("Roboport", 5, 
        {
            {"Advanced circuit", 45},
            {"Iron gear wheel", 45},
            {"Steel plate", 45},
        }),
        
        // Circuit network
        Recipe("Lamp", 0.5, 
        {
            {"Copper cable", 3},
            {"Electronic circuit", 1},
            {"Iron plate", 1},
        }),
        Recipe("Red wire", 0.5, 
        {
            {"Copper cable", 1},
            {"Electronic circuit", 1},
        }),
        Recipe("Green wire", 0.5, 
        {
            {"Copper cable", 1},
            {"Electronic circuit", 1},
        }),
        Recipe("Arithmetic combinator", 0.5, 
        {
            {"Copper cable", 5},
            {"Electronic circuit", 5},
        }),
        Recipe("Decider combinator", 0.5, 
        {
            {"Copper cable", 5},
            {"Electronic circuit", 5},
        }),
        Recipe("Constant combinator", 0.5, 
        {
            {"Copper cable", 5},
            {"Electronic circuit", 2},
        }),
        Recipe("Power switch", 0.5, 
        {
            {"Copper cable", 5},
            {"Electronic circuit", 2},
        }),
        Recipe("Programmable speaker", 0.5, 
        {
            {"Copper cable", 5},
            {"Electronic circuit", 4},
            {"Iron plate", 3},
            {"Iron stick", 4},
        }),
        
        // Terrain
        Recipe("Stone brick", 3.2, {{"Stone", 2}}),
        Recipe("Concrete", 10, 
        {
            {"Iron ore", 1},
            {"Stone brick", 5},
            {"Water", 100},
        }),
        Recipe("Hazard concrete", 0.25, {{"Concrete", 10}}),
        Recipe("Refined concrete", 15, 
        {
            {"Concrete", 20},
            {"Iron stick", 8},
            {"Steel plate", 1},
            {"Water", 100},
        }),
        Recipe("Refined hazard concrete", 0.25, {{"Refined concrete", 10}}),
        Recipe("Landfill", 0.5, {{"Stone", 20}}),
        Recipe("Cliff explosives", 8, 
        {
            {"Barrel", 1},
            {"Explosives", 10},
            {"Grenade", 1},
        }),
    };
    return recipes_list;
}

// INTERMEDIATE PRODUCTS
list<Recipe> init_intermediate_products_data() 
{
    list<Recipe> recipes_list = 
    {
        // Fluids
        // Recipe("", 1, 
        // {
        //     {"", 1},
        //     {"", 1},
        // }),
        
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