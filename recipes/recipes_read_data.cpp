#include "recipes_read_data.hpp"
#include "recipes_data.hpp"

using namespace Production::Tools;
using namespace Production::Electricity;
using namespace Production::ResourceExtraction;
using namespace Production::Furnaces;
using namespace Production::Fabrication;
using namespace Production::Modules;
using namespace Production::SpaceRelated;

using namespace Logistics::Storage;
using namespace Logistics::BeltTransportSystem;
using namespace Logistics::Inserters;
using namespace Logistics::EnergyAndPipeDistribution;
using namespace Logistics::Railway;
using namespace Logistics::Transport;
using namespace Logistics::LogisticNetwork;
using namespace Logistics::CircuitNetwork;
using namespace Logistics::Terrain;

using namespace IntermediateProducts::Fluids;
using namespace IntermediateProducts::Materials;
using namespace IntermediateProducts::CraftingComponents;
using namespace IntermediateProducts::SciencePacks;

using namespace Combat::Weapons;
using namespace Combat::Ammo;
using namespace Combat::Capsules;
using namespace Combat::Armor;
using namespace Combat::EquipmentModules;
using namespace Combat::CombatEquipment;
using namespace Combat::Defense;

namespace ProductionItemsLists 
{
    list<Recipe> get_tools() 
    {
        return list<Recipe>
        { 
            repair_pack 
        };
    }
    list<Recipe> get_electricity_items() 
    {
        return list<Recipe> 
        {
            accumulator, boiler, heat_excharger, heat_pipe, 
            nuclear_reactor, solar_panel, steam_engine, steam_turbine
        };
    }
    list<Recipe> get_resource_extraction_items()
    {
        return list<Recipe> 
        {
            burner_mining_drill, electric_mining_drill, offshore_pump, pumpjack
        };
    } 
    list<Recipe> get_furnaces()
    {
        return list<Recipe> 
        {
            stone_furnace, steel_furnace, electric_furnace
        };
    } 
    list<Recipe> get_production_works()
    {
        return list<Recipe> {
            assembling_machine_1, assembling_machine_2, assembling_machine_3,
            oil_refinery, chemical_plant, centrifuge, lab
        };
    } 
    list<Recipe> get_modules()
    {
        return list<Recipe> 
        {
            beacon, speed_module, speed_module_2, speed_module_3,
            efficiency_module, efficiency_module_2, efficiency_module_3,
            productivity_module, productivity_module_2, productivity_module_3
        };
    } 
    list<Recipe> get_space_related_specials()
{
    return list<Recipe> 
    {
        rocket_silo, satellite
    };
} 
}
namespace LogisticItemsLists
{
    list<Recipe> get_storage_items()
    {
        return list<Recipe> 
        {
            wooden_chest, iron_chest, steal_chest, storage_tank
        };
    }
    list<Recipe> get_belt_transport_system_items()
    {
        return list<Recipe> 
        {
            transport_belt, fast_transport_belt, express_transport_belt,
            underground_belt, fast_underground_belt, express_underground_belt,
            splitter, fast_splitter, express_splitter
        };
    }  
    list<Recipe> get_inserters()
    {
        return list<Recipe> 
        {
            burner_inserter, Logistics::Inserters::inserter, long_handed_inserter,
            fast_inserter, filter_inserter, stack_inserter, stack_filter_inserter
        };
    }  
    // list<Recipe> get_()
    // {
    //     return list<Recipe> 
    //     {
            
    //     };
    // }  
}
namespace IntermediateProductsItemsLists
{
    // list<Recipe> get_()
    // {
    //     return list<Recipe> 
    //     {
            
    //     };
    // } 
}
namespace CombatItemsLists
{

}


void show_production_items(int symbol) 
{
    RecipesList production_items_list;
    switch (symbol)
    {
        case 0:
            production_items_list = 
            RecipesList(
                "Production electricity items", 
                ProductionItemsLists::get_electricity_items()
            );
            break;
        case 1:
            production_items_list = 
            RecipesList(
                "Production resource extraction items", 
                ProductionItemsLists::get_resource_extraction_items()
            );
            break;   
    }
    println("-- PRODUCTION ITEMS LIST -- \n");
    production_items_list.show_recipes_list();
}
