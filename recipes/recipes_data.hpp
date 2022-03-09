namespace Production 
{
    namespace Tools 
    {
        Recipe repair_pack("Repair pack", 0.5, 
        {
            {"Electronic circuit", 2}, 
            {"Iron gear wheel", 2}
        });
    }
    namespace Electricity
    {
        Recipe boiler("Boiler", 0.5, 
        {
            {"Pipe", 4},
            {"Stone furnace", 1}
        });
        Recipe steam_engine("Steam engine", 0.5, 
        {
            {"Iron gear wheel", 8},
            {"Iron plate", 10},
            {"Pipe", 5}
        });
        Recipe solar_panel("Solar panel", 10, 
        {
            {"Copper plate", 5},
            {"Electronic circuit", 15},
            {"Steel plate", 5}
        });
        Recipe accumulator("Accumulator", 10, 
        {
            {"Battery", 5},
            {"Iron plate", 2}
        });
        Recipe nuclear_reactor("Nuclear reactor", 8, 
        {
            {"Advanced circuit", 500},
            {"Concrete", 500},
            {"Copper plate", 500},
            {"Steel plate", 500}
        });
        Recipe heat_pipe("Heat pipe", 1, 
        {
            {"Copper plate", 20},
            {"Steel plate", 10}
        });
        Recipe heat_excharger("Heat exchanger", 3, 
        {
            {"Copper plate", 100},
            {"Pipe", 10},
            {"Steel plate", 10}
        });
        Recipe steam_turbine("Steam turbine", 3, 
        {
            {"Copper plate", 50},
            {"Iron gear wheel", 50},
            {"Pipe", 20},
        });
    }
    namespace ResourceExtraction
    {
        Recipe burner_mining_drill("Burner mining drill", 2.0,
        {
            {"Iron gear wheel", 3}, 
            {"Copper plate", 3}
        });
        Recipe electric_mining_drill("Electric mining drill", 2, 
        {
            {"Electronic circuit", 3},
            {"Iron gear wheel", 5},
            {"Iron plate", 10},
        });
        Recipe offshore_pump("Offshore pump", 0.5, 
        {
            {"Electronic circuit", 2},
            {"Iron gear wheel", 1},
            {"Pipe", 1},
        });
        Recipe pumpjack("Pumpjack", 5, 
        {
            {"Electronic circuit", 5},
            {"Iron gear wheel", 10},
            {"Pipe", 10},
            {"Steel plate", 5},
        });
    }
    namespace Furnaces
    {
        Recipe stone_furnace("Stone furnace", 0.5, {{"Stone", 5}});
        Recipe steel_furnace("Steel furnace", 3, 
        {
            {"Steel plate", 6},
            {"Stone brick", 10},
        });
        Recipe electric_furnace("Electric furnace", 5, 
        {
            {"Advanced circuit", 5},
            {"Steel plate", 10},
            {"Stone brick", 10},
        });
    } 
    namespace Fabrication
    {
        Recipe assembling_machine_1("Assembling machine 1", 0.5, 
        {
            {"Electronic circuit", 3},
            {"Iron gear wheel", 5},
            {"Iron plate", 9},
        });
        Recipe assembling_machine_2("Assembling machine 2", 0.5, {
            {"Assembling machine 1", 1},
            {"Electronic circuit", 3},
            {"Iron gear wheel", 5},
            {"Steel plate", 2},
        });
        Recipe assembling_machine_3("Assembling machine 3", 0.5, 
        {
            {"Assembling machine 2", 2},
            {"Speed module", 4},
        });
        Recipe oil_refinery("Oil refinery", 8, 
        {
            {"Electronic circuit", 10},
            {"Iron gear wheel", 10},
            {"Pipe", 10},
            {"Steel plate", 15},
            {"Stone brick", 10},
        });
        Recipe chemical_plant("Chemical plant", 5, 
        {
            {"Electronic circuit", 5},
            {"Iron gear wheel", 5},
            {"Pipe", 5},
            {"Steel plate", 5},
        });
        Recipe centrifuge("Centrifuge", 4, 
        {
            {"Advanced circuit", 100},
            {"Concrete", 100},
            {"Iron gear wheel", 100},
            {"Steel plate", 50},
        });
        Recipe lab("Lab", 2, 
        {
            {"Electronic circuit", 10},
            {"Iron gear wheel", 10},
            {"Transport belt", 4},
        });
    } 
    namespace Modules
    {
        Recipe beacon("Beacon", 15, 
        {
            {"Advanced circuit", 20},
            {"Copper cable", 10},
            {"Electronic circuit", 20},
            {"Steel plate", 10},
        });
        Recipe speed_module("Speed module", 15, 
        {
            {"Advanced circuit", 5},
            {"Electronic circuit", 5},
        });
        Recipe speed_module_2("Speed module 2", 30, 
        {
            {"Advanced circuit", 5},
            {"Processing unit", 5},
            {"Speed module", 4}
        });
        Recipe speed_module_3("Speed module 3", 60, 
        {
            {"Advanced circuit", 5},
            {"Processing unit", 5},
            {"Speed module 2", 5}
        });
        Recipe efficiency_module("Efficiency module", 15, 
        {
            {"Advanced circuit", 5},
            {"Electronic circuit", 5},
        });
        Recipe efficiency_module_2("Efficiency module 2", 30, 
        {
            {"Advanced circuit", 5},
            {"Processing unit", 5},
            {"Efficiency module", 4}
        });
        Recipe efficiency_module_3("Efficiency module 3", 60, 
        {
            {"Advanced circuit", 5},
            {"Processing unit", 5},
            {"Efficiency module 2", 5}
        });
        Recipe productivity_module("Productivity module", 15, 
        {
            {"Advanced circuit", 5},
            {"Electronic circuit", 5},
        });
        Recipe productivity_module_2("Productivity module 2", 30, 
        {
            {"Advanced circuit", 5},
            {"Processing unit", 5},
            {"Productivity module", 4}
        });
        Recipe productivity_module_3("Productivity module 3", 60, 
        {
            {"Advanced circuit", 5},
            {"Processing unit", 5},
            {"Productivity module 2", 5}
        });
    } 
    namespace SpaceRelated
    {
        Recipe rocket_silo("Rocket silo", 30, 
        {
            {"Concrete", 1000},
            {"Electric engine unit", 200},
            {"Pipe", 100},
            {"Processing unit", 200},
            {"Steel plate", 1000},
        });
        Recipe satellite("Satellite", 5, 
        {
            {"Accumulator", 100},
            {"Low density structure", 100},
            {"Processing unit", 100},
            {"Radar", 5},
            {"Rocket fuel", 50},
            {"Solar panel", 100},
        });
    } 
}
namespace Logistics 
{
    namespace Storage 
    {

    }
    namespace BeltTransportSystem 
    {

    }
    namespace Inserters
    {

    }
    namespace EnergyAndPipeDistribution
    {

    }
    namespace Railway
    {

    }
    namespace Transport
    {

    }
    namespace LogisticNetwork
    {

    }
    namespace CircuitNetwork
    {

    }
    namespace Terrain
    {

    }
}  
namespace IntermediateProducts 
{
    namespace Fluids 
    {
        
    }
    namespace Materials
    {

    }
    namespace CraftingComponents 
    {

    }
    namespace SciencePacks
    {

    }

}  
namespace Combat 
{
    namespace Weapons
    {
        
    }
    namespace Ammo
    {

    }
    namespace Capsules
    {

    }
    namespace Armor
    {

    }
    namespace EquipmentModules
    {

    }
    namespace CombatEquipment
    {

    }
    namespace Defense
    {

    }
}  