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
    list<Recipe> get_energy_and_water_distribution_items()
    {
        return list<Recipe> 
        {
            small_electric_pole, medium_electric_pole, big_electric_pole,
            substation, pipe, pipe_to_ground, pump
        };
    }  
    list<Recipe> get_railway_insfrastructure_builds()
    {
        return list<Recipe> 
        {
            rail, train_stop, rail_signal, rail_chain_signal,
            locomotive, cargo_wagon, fluid_wagon, artillery_wagon
        };
    }  
    list<Recipe> get_transport_vehicles_and_items()
    {
        return list<Recipe> 
        {
            car, tank, spidertron, spidertron_remote
        };
    }  
    list<Recipe> get_logistic_network_items()
    {
        return list<Recipe> 
        {
            logistic_robot, construction_robot, active_provider_chest,
            passive_provider_chest, storage_chest, buffer_chest, requester_chest,
            roboport
        };
    }  
    list<Recipe> get_circuit_network_items()
    {
        return list<Recipe> 
        {
            lamp, red_wire, green_wire, arithmetic_combinator, decider_combinator,
            constant_combinator, power_switch, programmable_speaker
        };
    }  
    list<Recipe> get_terrain_producuts()
    {
        return list<Recipe> 
        {
            stone_brick, hazard_concrete, refined_concrete,
            refined_hazard_concrete, landfill, cliff_explosives
        };
    }
}  
namespace IntermediateProductsItemsLists
{
    list<Recipe> get_chemicals_and_gas()
    {
        return list<Recipe> 
        {
            heavy_oil_aop, heavy_oil_cl, light_oil_aop, light_oil_hoc,
            light_oil_cl, lubricant, petroleum_gas_bop, petroleum_gas_aop,
            petroleum_gas_loc, petroleum_gas_cl, sulfuric_acid
        };
    }
    list<Recipe> get_materials()
    {
        return list<Recipe> 
        {
            iron_plate, copper_plate, solid_fuel_red, solid_fuel_yellow,
            solid_fuel_black, steel_plate, plastic_bar, sulfur, battery,
            explosives, uranium_238, uranium_238_nfp, uranium_238_kep,
            uranium_235, uranium_235_kep 
        };
    } 
    list<Recipe> get_crafting_components_items()
    {
        return list<Recipe> 
        {
            cooper_cable, iron_stick, iron_gear_wheel, electronic_circuit,
            advanced_circuit, processing_unit, engine_unit, electric_engine_unit,
            flying_robot_frame, rocket_part, rocket_control_unit, rocket_fuel,
            nuclear_fuel, uranium_fuel_cell, used_up_uranium_fuel_cell
        };
    } 
    list<Recipe> get_science_packs()
    {
        return list<Recipe> 
        {
            automation_science_pack, logistic_science_pack,
            military_science_pack, chemical_science_pack, 
            production_science_pack, utility_science_pack
        };
    } 
}  
namespace CombatItemsLists
{
    list<Recipe> get_weapons()
    {
        return list<Recipe> 
        {
            pistol, submachine_gun, shotgun, combat_shotgun, rocket_launcher,
            flamethrower, land_mine
        };
    } 
    list<Recipe> get_ammo_items()
    {
        return list<Recipe> 
        {
            firearm_magazine, piercing_rounds_magazine, shotgun_shells,
            piercing_shotgun_shells, cannon_shell, explosive_cannon_shell,
            uranium_cannon_shell, explosive_uranium_cannon_shell, rocket,
            explosive_rocket, atomic_bomb, flamethrower_ammo
        };
    } 
    list<Recipe> get_combat_capsules()
    {
        return list<Recipe> 
        {
            grenade, cluster_grenade, poison_capsule, slowdown_capsule,
            defender_capsule, distractor_capsule, destroyer_capsule
        };
    } 
    list<Recipe> get_combat_armors()
    {
        return list<Recipe> 
        {
            light_armor, heavy_armor, modular_armor, power_armor,
            power_armor_mk2
        };
    } 
    list<Recipe> get_used_equipment()
    {
        return list<Recipe> 
        {
            portable_solar_panel, portable_fusion_reactor,
            personal_battery, personal_battery_mk2, belt_immunity_equipment,
            exoskeleton, personal_roboport, personal_roboport_mk2, nightvision
        };
    } 
    list<Recipe> get_defense_equipment()
    {
        return list<Recipe> 
        {
            energy_shield, energy_shield_mk2, personal_laser_defense,
            discharge_defense, discharge_defense_remote
        };
    } 
    list<Recipe> get_defense_builds()
    {
        return list<Recipe> 
        {
            wall, gate, gun_turret, laser_turret, flamethrower_turret,
            artillery_turret, artillery_targeting_remote, radar
        };
    } 
}

void show_production_items(int symbol) 
{
    RecipesList production_items_list;
    switch (symbol)
    {
        case 0:
            break;
        case 1:
            production_items_list = 
            RecipesList(
                "Production tools items", 
                ProductionItemsLists::get_tools()
            );
            break;
        case 2:
            production_items_list = 
            RecipesList(
                "Production electricity items", 
                ProductionItemsLists::get_electricity_items()
            );
            break;
        case 3:
            production_items_list = 
            RecipesList(
                "Production resource extraction items", 
                ProductionItemsLists::get_resource_extraction_items()
            );
            break;
        case 4:
            production_items_list = 
            RecipesList(
                "Production furnaces", 
                ProductionItemsLists::get_furnaces()
            );
            break;
        case 5:
            production_items_list = 
            RecipesList(
                "Production works", 
                ProductionItemsLists::get_production_works()
            );
            break;
        case 6:
            production_items_list = 
            RecipesList(
                "Production modules", 
                ProductionItemsLists::get_modules()
            );
            break;
        case 7:
            production_items_list = 
            RecipesList(
                "Production space related specials", 
                ProductionItemsLists::get_space_related_specials()
            );
            break;
        default:
            println("Program error");
            break;
    }
    println("-------------------------------");
    println(production_items_list.get_name());
    println("-------------------------------");
    production_items_list.show_recipes_list();
}
void show_logistic_items(int symbol) 
{
    RecipesList logistic_items_list;
    switch (symbol)
    {
        case 0:
            break;
        case 1:
            logistic_items_list = 
            RecipesList(
                "Logistic storage items", 
                LogisticItemsLists::get_storage_items()
            );
            break;
        case 2:
            logistic_items_list = 
            RecipesList(
                "Logistic belt transport system items", 
                LogisticItemsLists::get_belt_transport_system_items()
            );
            break;
        case 3:
            logistic_items_list = 
            RecipesList(
                "Logistic inserters", 
                LogisticItemsLists::get_inserters()
            );
            break;
        case 4:
            logistic_items_list = 
            RecipesList(
                "Logistic energy and water distribution items", 
                LogisticItemsLists::get_energy_and_water_distribution_items()
            );
            break;
        case 5:
            logistic_items_list = 
            RecipesList(
                "Logistic railway insfrastructure builds", 
                LogisticItemsLists::get_railway_insfrastructure_builds()
            );
            break;
        case 6:
            logistic_items_list = 
            RecipesList(
                "Logistic transport vehicles and items", 
                LogisticItemsLists::get_transport_vehicles_and_items()
            );
            break;
        case 7:
            logistic_items_list = 
            RecipesList(
                "Logistic network items", 
                LogisticItemsLists::get_logistic_network_items()
            );
            break;
        case 8:
            logistic_items_list = 
            RecipesList(
                "Logistic circuit network", 
                LogisticItemsLists::get_circuit_network_items()
            );
            break;
        case 9:
            logistic_items_list = 
            RecipesList(
                "Logistic terrain products", 
                LogisticItemsLists::get_terrain_producuts()
            );
            break;
        default:
            println("Program error");
            break;
    }
    println("-------------------------------");
    println(logistic_items_list.get_name());
    println("-------------------------------");
    logistic_items_list.show_recipes_list();
}
void show_intermediate_products_items(int symbol) 
{
    RecipesList intermediate_products_list;
    switch (symbol)
    {
        case 0:
            break;
        case 1:
            intermediate_products_list = 
            RecipesList(
                "Intermediate products: chemicals and gas", 
                IntermediateProductsItemsLists::get_chemicals_and_gas()
            );
            break;
        case 2:
            intermediate_products_list = 
            RecipesList(
                "Intermediate products: materials", 
                IntermediateProductsItemsLists::get_materials()
            );
            break;
        case 3:
            intermediate_products_list = 
            RecipesList(
                "Intermediate products: crafting components items", 
                IntermediateProductsItemsLists::get_crafting_components_items()
            );
            break;
        case 4:
            intermediate_products_list = 
            RecipesList(
                "Intermediate products: science packs", 
                IntermediateProductsItemsLists::get_science_packs()
            );
            break;
        default:
            println("Program error");
            break;
    }
    println("-------------------------------");
    println(intermediate_products_list.get_name());
    println("-------------------------------");
    intermediate_products_list.show_recipes_list();
}
void show_combat_items(int symbol) 
{
    RecipesList combat_items_list;
    switch (symbol)
    {
        case 0:
            break;
        case 1:
            combat_items_list = 
            RecipesList(
                "Combat weapons", 
                CombatItemsLists::get_weapons()
            );
            break;
        case 2:
            combat_items_list = 
            RecipesList(
                "Combat ammo items", 
                CombatItemsLists::get_ammo_items()
            );
            break;
        case 3:
            combat_items_list = 
            RecipesList(
                "Combat capsules items", 
                CombatItemsLists::get_combat_capsules()
            );
            break;
        case 4:
            combat_items_list = 
            RecipesList(
                "Combat armors", 
                CombatItemsLists::get_combat_armors()
            );
            break;
        case 5:
            combat_items_list = 
            RecipesList(
                "Combat used equipment items", 
                CombatItemsLists::get_used_equipment()
            );
            break;
        case 6:
            combat_items_list = 
            RecipesList(
                "Combat defense equipment items", 
                CombatItemsLists::get_defense_equipment()
            );
            break;
        case 7:
            combat_items_list = 
            RecipesList(
                "Combat defense builds", 
                CombatItemsLists::get_defense_builds()
            );
            break;
        default:
            println("Program error");
            break;
    }
    println("-------------------------------");
    println(combat_items_list.get_name());
    println("-------------------------------");
    combat_items_list.show_recipes_list();
}