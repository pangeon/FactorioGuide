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
        Recipe wooden_chest("Wooden chest", 0.5, {{"Wood", 2}});
        Recipe iron_chest("Iron chest", 0.5, {{"Iron plate", 6}});
        Recipe steal_chest("Steal chest", 0.5, {{"Steal plate", 8}});
        Recipe storage_tank("Storage tank", 3, 
        {
            {"Iron plate", 20},
            {"Steal plate", 5}
        });
    }
    namespace BeltTransportSystem 
    {
        Recipe transport_belt("Transport belt", 0.5, 
        {
            {"Iron gear wheel", 1},
            {"Iron plate", 1},
        });
        Recipe fast_transport_belt("Fast transport belt", 0.5, 
        {
            {"Iron gear wheel", 5},
            {"Transport belt", 1},
        });
        Recipe express_transport_belt("Express transport belt", 0.5, 
        {
            {"Fast transport belt", 1},
            {"Iron gear wheel", 10},
            {"Lubricant", 20},
        });
        Recipe underground_belt("Underground belt", 1, 
        {
            {"Iron plate", 10},
            {"Transport belt", 5},
        });
        Recipe fast_underground_belt("Fast underground belt", 2, 
        {
            {"Iron gear wheel", 40},
            {"Underground belt", 2},
        });
        Recipe express_underground_belt("Express underground belt", 2, 
        {
            {"Fast underground belt", 2},
            {"Iron gear wheel", 80},
            {"Lubricant", 40},
        });
        Recipe splitter("Splitter", 1, 
        {
            {"Electronic circuit", 5},
            {"Iron plate", 5},
            {"Transport belt", 4},
        });
        Recipe fast_splitter("Fast splitter", 2, 
        {
            {"Electronic circuit", 10},
            {"Iron gear wheel", 10},
            {"Splitter", 1},
        });
        Recipe express_splitter("Express splitter", 2, 
        {
            {"Advanced circuit", 10},
            {"Fast splitter", 1},
            {"Iron gear wheel", 10},
            {"Lubricant", 80},
        });
    }
    namespace Inserters
    {
        Recipe burner_inserter("Burner inserter", 0.5, 
        {
            {"Iron gear wheel", 1},
            {"Iron plate", 1},
        });
        Recipe inserter("Inserter", 0.5, 
        {
            {"Electronic circuit", 1},
            {"Iron gear wheel", 1},
            {"Iron plate", 1},
        });
        Recipe long_handed_inserter("Long-handed inserter", 0.5, 
        {
            {"Inserter", 1},
            {"Iron gear wheel", 1},
            {"Iron plate", 1},
        });
        Recipe fast_inserter("Fast inserter", 0.5, 
        {
            {"Electronic circuit", 2},
            {"Inserter", 1},
            {"Iron plate", 2},
        });
        Recipe filter_inserter("Filter inserter", 0.5, 
        {
            {"Electronic circuit", 4},
            {"Fast inserter", 1},
        });
        Recipe stack_inserter("Stack inserter", 0.5, 
        {
            {"Advanced circuit", 1},
            {"Electronic circuit", 15},
            {"Fast inserter", 1},
            {"Iron gear wheel", 15},
        });
        Recipe stack_filter_inserter("Stack filter inserter", 0.5, 
        {
            {"Electronic circuit", 5},
            {"Stack inserter", 1},
        });
    }
    namespace EnergyAndPipeDistribution
    {
        Recipe small_electric_pole("Small electric pole", 0.5, 
        {
            {"Cooper cable", 2},
            {"Wood", 1}
        });
        Recipe medium_electric_pole("Medium electric pole", 0.5, 
        {
            {"Copper plate", 2},
            {"Iron stick", 4},
            {"Steel plate", 2},
        });
        Recipe big_electric_pole("Big electric pole", 0.5, 
        {
            {"Copper plate", 5},
            {"Iron stick", 8},
            {"Steel plate", 5},
        });
        Recipe substation("Substation", 0.5, 
        {
            {"Advanced circuit", 5},
            {"Copper plate", 5},
            {"Steel plate", 10},
        });
        Recipe pipe("Pipe", 0.5, {{"Iron plate", 1}});
        Recipe pipe_to_ground("Pipe to ground", 0.5, 
        {
            {"Iron plate", 5},
            {"Pipe", 10},
        });
        Recipe pump("Pump", 2, 
        {
            {"Engine unit", 1},
            {"Pipe", 1},
            {"Steel plate", 1},
        });
    }
    namespace Railway
    {
       Recipe rail("Rail", 0.5, 
        {
            {"Iron stick", 1},
            {"Steel plate", 1},
            {"Stone", 1},
        });
        Recipe train_stop("Train stop", 0.5, 
        {
            {"Electronic circuit", 5},
            {"Iron plate", 6},
            {"Iron stick", 6},
            {"Steel plate", 3},
        });
        Recipe rail_signal("Rail signal", 0.5, 
        {
            {"Electronic circuit", 1},
            {"Iron plate", 5},
        });
        Recipe rail_chain_signal("Rail chain signal", 0.5, 
        {
            {"Electronic circuit", 1},
            {"Iron plate", 5},
        });
        Recipe locomotive("Locomotive", 4, 
        {
            {"Electronic circuit", 10},
            {"Engine unit", 20},
            {"Steel plate", 30},
        });
        Recipe cargo_wagon("Cargo wagon", 1, 
        {
            {"Steel plate", 20},
            {"Iron plate", 20},
            {"Iron gear wheel", 10},
        });
        Recipe fluid_wagon("Fluid wagon", 1.5, 
        {
            {"Iron gear wheel", 10},
            {"Pipe", 8},
            {"Steel plate", 16},
            {"Storage tank", 1},
        });
        Recipe artillery_wagon("Artillery wagon", 4, 
        {
            {"Advanced circuit", 20},
            {"Engine unit", 64},
            {"Iron gear wheel", 10},
            {"Pipe", 16},
            {"Steel plate", 40},
        });
    }
    namespace Transport
    {
        Recipe car("Car", 2, 
        {
            {"Engine unit", 8},
            {"Iron plate", 20},
            {"Steel plate", 5},
        });
        Recipe tank("Tank", 5, 
        {
            {"Advanced circuit", 10},
            {"Engine unit", 32},
            {"Iron gear wheel", 20},
            {"Steel plate", 50},
        });
        Recipe spidertron("Spidertron", 10, 
        {
            {"Efficiency module 3", 2},
            {"Exoskeleton", 4},
            {"Portable fusion reactor", 2},
            {"Low density structure", 150},
            {"Radar", 2},
            {"Raw fish", 1},
            {"Rocket control unit", 16},
            {"Rocket launcher", 4},
        });
        Recipe spidertron_remote("Spidertron remote", 0.5, 
        {
            {"Radar", 1},
            {"Rocket control unit", 1},
        });
    }
    namespace LogisticNetwork
    {
        Recipe logistic_robot("Logistic robot", 0.5, 
        {
            {"Advanced circuit", 2},
            {"Flying robot frame", 1},
        });
        Recipe construction_robot("Construction robot", 0.5, 
        {
            {"Electronic circuit", 2},
            {"Flying robot frame", 1},
        });
        Recipe active_provider_chest("Active provider chest", 0.5, 
        {
            {"Advanced circuit", 1},
            {"Electronic circuit", 3},
            {"Steel chest", 1},
        });
        Recipe passive_provider_chest("Passive provider chest", 0.5, 
        {
            {"Advanced circuit", 1},
            {"Electronic circuit", 3},
            {"Steel chest", 1},
        });
        Recipe storage_chest("Storage chest", 0.5, 
        {
            {"Advanced circuit", 1},
            {"Electronic circuit", 3},
            {"Steel chest", 1},
        });
        Recipe buffer_chest("Buffer chest", 0.5, 
        {
            {"Advanced circuit", 1},
            {"Electronic circuit", 3},
            {"Steel chest", 1},
        });
        Recipe requester_chest("Requester chest", 0.5, 
        {
            {"Advanced circuit", 1},
            {"Electronic circuit", 3},
            {"Steel chest", 1},
        });
        Recipe roboport("Roboport", 5, 
        {
            {"Advanced circuit", 45},
            {"Iron gear wheel", 45},
            {"Steel plate", 45},
        });
    }
    namespace CircuitNetwork
    {
        Recipe lamp("Lamp", 0.5, 
        {
            {"Copper cable", 3},
            {"Electronic circuit", 1},
            {"Iron plate", 1},
        });
        Recipe red_wire("Red wire", 0.5, 
        {
            {"Copper cable", 1},
            {"Electronic circuit", 1},
        });
        Recipe green_wire("Green wire", 0.5, 
        {
            {"Copper cable", 1},
            {"Electronic circuit", 1},
        });
        Recipe arithmetic_combinator("Arithmetic combinator", 0.5, 
        {
            {"Copper cable", 5},
            {"Electronic circuit", 5},
        });
        Recipe decider_combinator("Decider combinator", 0.5, 
        {
            {"Copper cable", 5},
            {"Electronic circuit", 5},
        });
        Recipe constant_combinator("Constant combinator", 0.5, 
        {
            {"Copper cable", 5},
            {"Electronic circuit", 2},
        });
        Recipe power_switch("Power switch", 0.5, 
        {
            {"Copper cable", 5},
            {"Electronic circuit", 2},
        });
        Recipe programmable_speaker("Programmable speaker", 0.5, 
        {
            {"Copper cable", 5},
            {"Electronic circuit", 4},
            {"Iron plate", 3},
            {"Iron stick", 4},
        });
    }
    namespace Terrain
    {
        Recipe stone_brick("Stone brick", 3.2, {{"Stone", 2}});
        Recipe concrete("Concrete", 10, 
        {
            {"Iron ore", 1},
            {"Stone brick", 5},
            {"Water", 100},
        });
        Recipe hazard_concrete("Hazard concrete", 0.25, {{"Concrete", 10}});
        Recipe refined_concrete("Refined concrete", 15, 
        {
            {"Concrete", 20},
            {"Iron stick", 8},
            {"Steel plate", 1},
            {"Water", 100},
        });
        Recipe refined_hazard_concrete("Refined hazard concrete", 0.25, {{"Refined concrete", 10}});
        Recipe landfill("Landfill", 0.5, {{"Stone", 20}});
        Recipe cliff_explosives("Cliff explosives", 8, 
        {
            {"Barrel", 1},
            {"Explosives", 10},
            {"Grenade", 1},
        });
    }
}  
namespace IntermediateProducts 
{
    namespace Fluids
    {
        Recipe heavy_oil_aop("Heavy oil (Advanced oil processing)", 5, 
        {
            {"Crude oil", 100},
            {"Water", 50},
        });
        Recipe heavy_oil_cl("Heavy oil (Coal liquefaction)", 5, 
        {
            {"Coal", 10},
            {"Heavy oil", 25},
            {"Steam", 50},
        });
        Recipe light_oil_aop("Light oil (Advanced oil processing)", 5, 
        {
            {"Crude oil", 100},
            {"Water", 50},
        });
        Recipe light_oil_hoc("Light oil (Heavy oil cracking)", 2, 
        {
            {"Heavy oil", 40},
            {"Water", 30},
        });
        Recipe light_oil_cl("Light oil (Coal liquefaction)", 5, 
        {
            {"Coal", 10},
            {"Heavy oil", 25},
            {"Steam", 50},
        });
        Recipe lubricant("Lubricant", 1, {{"Heavy oil", 10}});
        Recipe petroleum_gas_bop("Petroleum gas (Basic oil processing)", 5, {{"Crude oil", 100}});
        Recipe petroleum_gas_aop("Petroleum gas (Advanced oil processing)", 5, 
        {
            {"Crude oil", 100},
            {"Water", 50},
        });
        Recipe petroleum_gas_loc("Petroleum gas (Light oil cracking)", 2, 
        {
            {"Light oil", 30},
            {"Water", 30},
        });
        Recipe petroleum_gas_cl("Petroleum gas (Coal liquefaction)", 2, 
        {
            {"Coal", 10},
            {"Heavy oil", 25},
            {"Steam", 50},
        });
        Recipe sulfuric_acid("Sulfuric acid", 1, 
        {
            {"Iron plate", 1},
            {"Sulfur", 5},
            {"Water", 100},
        });
    }
    namespace Materials
    {
        Recipe iron_plate("Iron plate", 3.2, {{"Iron ore", 1}});
        Recipe copper_plate("Copper plate", 3.2, {{"Copper ore", 1}});
        Recipe solid_fuel_red("Solid fuel (red recipe)", 2, {{"Heavy oil", 20}});
        Recipe solid_fuel_yellow("Solid fuel (yellow recipe)", 2, {{"Light oil", 10}});
        Recipe solid_fuel_black("Solid fuel (black recipe)", 2, {{"Petroleum gas", 20}});
        Recipe steel_plate("Steel plate", 16, {{"Iron plate", 5}});
        Recipe plastic_bar("Plastic bar", 1, 
        {
            {"Coal", 1},
            {"Petroleum gas", 20},
        });
        Recipe sulfur("Sulfur", 1, 
        {
            {"Petroleum gas", 30},
            {"Water", 30},
        });
        Recipe battery("Battery", 4, 
        {
            {"Copper plate", 1},
            {"Iron plate", 1},
            {"Sulfuric acid", 20},
        });
        Recipe explosives("Explosives", 4, 
        {
            {"Coal", 1},
            {"Sulfur", 1},
            {"Water", 10},
        });
        Recipe uranium_238("Uranium-238", 12, {{"Uranium ore", 10}});
        Recipe uranium_238_nfp("Uranium-238 (Nuclear fuel reprocessing)", 60, {{"Used up uranium fuel cell", 5}});
        Recipe uranium_238_kep("Uranium-238 (Kovarex enrichment process)", 60, 
        {
            {"Uranium-235", 40},
            {"Uranium-238", 5},
        });
        Recipe uranium_235("Uranium-235", 12, {{"Uranium ore", 10}});
        Recipe uranium_235_kep("Uranium-235 (Kovarex enrichment process)", 60, 
        {
            {"Uranium-235", 40},
            {"Uranium-238", 5},
        });
    }
    namespace CraftingComponents 
    {
        Recipe cooper_cable("Cooper cable", 0.5, {{"Copper plate", 1}});
        Recipe iron_stick("Iron stick", 0.5, {{"Iron plate", 1}});
        Recipe iron_gear_wheel("Iron gear wheel", 0.5, {{"Iron plate", 2}});
        Recipe electronic_circuit("Electronic circuit", 0.5, 
        {
            {"Cooper cable", 3},
            {"Iron plate", 1}
        });
        Recipe advanced_circuit("Advanced circuit", 6, 
        {
            {"Cooper cable", 4},
            {"Electronic circuit", 2},
            {"Plastic bar", 2},
        }); 
        Recipe processing_unit("Processing unit", 10, 
        {
            {"Advanced circuit", 2},
            {"Electronic circuit", 20},
            {"Sulfuric acid", 5},
        }); 
        Recipe engine_unit("Engine unit", 10, 
        {
            {"Iron gear wheel", 1},
            {"Pipe", 2},
            {"Steel plate", 1},
        }); 
        Recipe electric_engine_unit("Electric engine unit", 10, 
        {
            {"Electronic circuit", 2},
            {"Engine unit", 1},
            {"Lubricant", 15},
        }); 
        Recipe flying_robot_frame("Flying robot frame", 20, 
        {
            {"Battery", 2},
            {"Electric engine unit", 1},
            {"Electronic circuit", 3},
            {"Steel plate", 1},
        }); 
        Recipe rocket_part("Rocket part", 3, 
        {
            {"Low density structure", 10},
            {"Rocket control unit", 10},
            {"Rocket fuel", 10},
        }); 
        Recipe rocket_control_unit("Rocket control unit", 30, 
        {
            {"Processing unit", 1},
            {"Speed module", 1},
        }); 
        Recipe rocket_fuel("Rocket fuel", 30, 
        {
            {"Light oil", 10},
            {"Solid fuel", 10},
        }); 
        Recipe nuclear_fuel("Nuclear fuel", 90, 
        {
            {"Rocket fuel", 1},
            {"Uranium-235", 1},
        });
        Recipe uranium_fuel_cell("Uranium fuel cell", 10, 
        {
            {"Iron plate", 10},
            {"Uranium-235", 1},
            {"Uranium-238", 19},
        });
        Recipe used_up_uranium_fuel_cell("Used up uranium fuel cell", 200, {{"Uranium fuel cell", 1}}); 
    }
    namespace SciencePacks
    {
        Recipe automation_science_pack("Automation science pack", 5, {
            {"Copper plate", 1},
            {"Iron gear wheel", 1},
        });
        Recipe logistic_science_pack("Logistic science pack", 6, 
        {
            {"Inserter", 1},
            {"Transport belt", 1},
        }); 
        Recipe military_science_pack("Military science pack", 10, 
        {
            {"Grenade", 1},
            {"Piercing rounds magazine", 1},
            {"Wall", 2},
        }); 
        Recipe chemical_science_pack("Chemical science pack", 24, 
        {
            {"Advanced circuit", 3},
            {"Engine unit", 2},
            {"Sulfur", 1},
        });
        Recipe production_science_pack("Production science pack", 21, 
        {
            {"Electric furnace", 1},
            {"Productivity module", 1},
            {"Rail", 30},
        }); 
        Recipe utility_science_pack("Utility science pack", 21, 
        {
            {"Flying robot frame", 1},
            {"Low density structure", 3},
            {"Processing unit", 2},
        });
    }
}  
namespace Combat 
{
    namespace Weapons
    {
        Recipe pistol("Pistol", 5, 
        {
            {"Copper plate", 5},
            {"Iron plate", 5},
        });
        Recipe submachine_gun("Submachine gun", 10, 
        {
            {"Copper plate", 5},
            {"Iron gear wheel", 10},
            {"Iron plate", 10},
        });
        Recipe shotgun("Shotgun", 10, 
        {
            {"Copper plate", 10},
            {"Iron gear wheel", 5},
            {"Iron plate", 15},
            {"Wood", 5},
        });
        Recipe combat_shotgun("Combat Shotgun", 10, 
        {
            {"Copper plate", 10},
            {"Iron gear wheel", 5},
            {"Steal plate", 15},
            {"Wood", 10},
        });
        Recipe rocket_launcher("Rocket launcher", 10, 
        {
            {"Electronic circuit", 5},
            {"Iron gear wheel", 5},
            {"Iron plate", 5},
        });
        Recipe flamethrower("Flamethrower", 10, 
        {
            {"Iron gear wheel", 10},
            {"Steel plate", 5},
        });
        Recipe land_mine("Land mine", 5, 
        {
            {"Explosives", 2},
            {"Steel plate", 1},
        });
    }
    namespace Ammo
    {
        Recipe firearm_magazine("Firearm magazine", 1, {{"Iron plate", 4}});
        Recipe piercing_rounds_magazine("Piercing rounds magazine", 3, 
        {
            {"Copper plate", 5},
            {"Firearm magazine", 1},
            {"Steel plate", 1},
        });
        Recipe uranium_rounds_magazine("Uranium rounds magazine", 10, 
        {
            {"Piercing rounds magazine", 1},
            {"Uranium-238", 1},
        });
        Recipe shotgun_shells("Shotgun shells", 3, 
        {
            {"Copper plate", 1},
            {"Iron plate", 1},
        });
        Recipe piercing_shotgun_shells("Piercing shotgun shells", 8, 
        {
            {"Copper plate", 5},
            {"Shotgun shells", 2},
            {"Steel plate", 2},
        });
        Recipe cannon_shell("Cannon shell", 8, 
        {
            {"Explosives", 1},
            {"Plastic bar", 2},
            {"Steel plate", 2},
        });
        Recipe explosive_cannon_shell("Explosive cannon shell", 8, 
        {
            {"Explosives", 2},
            {"Plastic bar", 2},
            {"Steel plate", 2},
        });  
        Recipe uranium_cannon_shell("Uranium cannon shell", 12, 
        {
            {"Cannon shell", 1},
            {"Uranium-238", 1},
        });
        Recipe explosive_uranium_cannon_shell("Explosive uranium cannon shell", 12, 
        {
            {"Explosive cannon shell", 1},
            {"Uranium-238", 1},
        });
        Recipe rocket("Rocket", 8, 
        {
            {"Electronic circuit", 1},
            {"Explosives", 1},
            {"Iron plate", 2},
        });
        Recipe explosive_rocket("Explosive rocket", 8, 
        {
            {"Explosives", 2},
            {"Rocket", 1},
        });
        Recipe atomic_bomb("Atomic bomb", 50, 
        {
            {"Explosives", 10},
            {"Rocket control unit", 10},
            {"Uranium-235", 30},
        });
        Recipe flamethrower_ammo("Flamethrower ammo", 6, 
        {
            {"Crude oil", 100},
            {"Steel plate", 5},
        });
    }
    namespace Capsules
    {
        Recipe grenade("Grenade", 8, 
        {
            {"Coal", 10},
            {"Iron plate", 5},
        });
        Recipe cluster_grenade("Cluster grenade", 8, 
        {
            {"Explosives", 5},
            {"Grenade", 7},
            {"Steel plate", 5},
        });
        Recipe poison_capsule("Poison capsule", 8, 
        {
            {"Coal", 10},
            {"Electronic circuit", 3},
            {"Steel plate", 3},
        });
        Recipe slowdown_capsule("Slowdown capsule", 8, 
        {
            {"Coal", 10},
            {"Electronic circuit", 2},
            {"Steel plate", 2},
        });
        Recipe defender_capsule("Defender capsule", 8, 
        {
            {"Electronic circuit", 3},
            {"Iron gear wheel", 3},
            {"Piercing rounds magazine", 3},
        });
        Recipe distractor_capsule("Distractor capsule", 15, 
        {
            {"Advanced circuit", 3},
            {"Defender capsule", 4},
        });
        Recipe destroyer_capsule("Destroyer capsule", 15, 
        {
            {"Distractor capsule", 4},
            {"Speed module", 1},
        });
    }
    namespace Armor
    {
        Recipe light_armor("Light armor", 3, {{"Iron plate", 40}});
        Recipe heavy_armor("Heavy armor", 8, 
        {
            {"Copper plate", 100},
            {"Steel plate", 50},
        });
        Recipe modular_armor("Modular armor", 15, 
        {
            {"Advanced circuit", 30},
            {"Steel plate", 50},
        });
        Recipe power_armor("Power armor", 20, 
        {
            {"Electric engine unit", 20},
            {"Processing unit", 40},
            {"Steel plate", 40},
        });
        Recipe power_armor_mk2("Power armor MK2", 25, 
        {
            {"Efficiency module 2", 25},
            {"Electric engine unit", 40},
            {"Low density structure", 30},
            {"Processing unit", 60},
            {"Speed module 2", 25},
        });
    }
    namespace EquipmentModules
    {
        Recipe portable_solar_panel("Portable solar panel", 10, 
        {
            {"Advanced circuit", 2},
            {"Solar panel", 1},
            {"Steel plate", 5},
        });
        Recipe portable_fusion_reactor("Portable fusion reactor", 10, 
        {
            {"Low density structure", 50},
            {"Processing unit", 200},
        });
        Recipe personal_battery("Personal battery", 10, 
        {
            {"Battery", 5},
            {"Steel plate", 10},
        });
        Recipe personal_battery_mk2("Personal battery MK2", 10, 
        {
            {"Personal battery", 10},
            {"Low density structure", 5},
            {"Processing unit", 15},
        });
        Recipe belt_immunity_equipment("Belt immunity equipment", 10, 
        {
            {"Advanced circuit", 5},
            {"Steel plate", 10},
        });
        Recipe exoskeleton("Exoskeleton", 10, 
        {
            {"Electric engine unit", 30},
            {"Processing unit", 10},
            {"Steel plate", 20},
        });
        Recipe personal_roboport("Personal roboport", 10, 
        {
            {"Advanced circuit", 10},
            {"Battery", 45},
            {"Iron gear wheel", 40},
            {"Steel plate", 20},
        });
        Recipe personal_roboport_mk2("Personal roboport MK2", 20, 
        {
            {"Low density structure", 20},
            {"Personal roboport", 5},
            {"Processing unit", 100},
        });
        Recipe nightvision("Nightvision", 10, 
        {
            {"Steel plate", 5},
            {"Advanced circuit", 10},
        });
    }
    namespace CombatEquipment
    {
        Recipe energy_shield("Energy shield", 10, 
        {
            {"Advanced circuit", 5},
            {"Steel plate", 10},
        });
        Recipe energy_shield_mk2("Energy shield MK2", 10, 
        {
            {"Energy shield", 10},
            {"Low density structure", 5},
            {"Processing unit", 5},
        });
        Recipe personal_laser_defense("Personal laser defense", 10, 
        {
            {"Laser turret", 5},
            {"Low density structure", 5},
            {"Processing unit", 20},
        });
        Recipe discharge_defense("Discharge defense", 10, 
        {
            {"Laser turret", 10},
            {"Processing unit", 5},
            {"Steel plate", 20},
        });
        Recipe discharge_defense_remote("Discharge defense remote", 0.5, {{"Electronic circuit", 1}});
    }
    namespace Defense
    {
        Recipe wall("Wall", 0.5, {{"Stone brick", 5}});
        Recipe gate("Gate", 0.5, 
        {
            {"Electronic circuit", 2},
            {"Steel plate", 2},
            {"Wall", 1},
        });
        Recipe gun_turret("Gun turret", 8, 
        {
            {"Copper plate", 10},
            {"Iron gear wheel", 10},
            {"Iron plate", 20},
        });
        Recipe laser_turret("Laser turret", 20, 
        {
            {"Battery", 12},
            {"Electronic circuit", 20},
            {"Steel plate", 20},
        });
        Recipe flamethrower_turret("Flamethrower turret", 20, 
        {
            {"Engine unit", 5},
            {"Iron gear wheel", 15},
            {"Pipe", 10},
            {"Steel plate", 30},
        });
        Recipe artillery_turret("Artillery turret", 40, 
        {
            {"Advanced circuit", 20},
            {"Concrete", 60},
            {"Iron gear wheel", 40},
            {"Steel plate", 60},
        });
        Recipe artillery_targeting_remote("Artillery targeting remote", 0.5, 
        {
            {"Processing unit", 1},
            {"Radar", 1},
        });
        Recipe radar("Radar", 0.5, 
        {
            {"Electronic circuit", 5},
            {"Iron gear wheel", 5},
            {"Iron plate", 10},
        });
    }
}  