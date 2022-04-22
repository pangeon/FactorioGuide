#include "technologies_data.hpp"

namespace Machines {
    TechnologiesList get_technologies() 
    {
        // ------------- Automation 1
        Technology automation_research_lvl_1
        (
            "Automation", 
            {"None"}, 
            {"Electronics"}, 
            {"Assembling machine 1", "Long-handed inserter"}
        );
        automation_research_lvl_1.add_all_technology_costs
        (
            {
                {"Time", 10}, 
                {"Automation science pack", 1}, 
                {"Multiplier", 10}
            }
        );

        // ------------- Automation 2
        Technology automation_research_lvl_2
        (
            "Automation 2", 
            {"Electronics", "Logistic science pack", "Steel processing"}, 
            {"Concrete", "Fluid handling", "Lab research speed"}, 
            {"Assembling machine 2"}
        );
        automation_research_lvl_2.add_all_technology_costs
        (
            {
                {"Time", 15}, 
                {"Automation science pack", 1}, 
                {"Logistic science pack", 1}, 
                {"Multiplier", 40}
            }
        );

        // ------------- Automation 3
        Technology automation_research_lvl_3
        (
            "Automation 3", 
            {"Production science pack", "Speed module"}, 
            {"Assembling machine 3"}, 
            {"Assembling machine 3"}
        );
        automation_research_lvl_3.add_all_technology_costs
        (
            {
                {"Time", 60}, 
                {"Automation science pack", 1}, 
                {"Logistic science pack", 1}, 
                {"Chemical science pack", 1}, 
                {"Production science pack", 1}, 
                {"Multiplier", 150}
            }
        );

        TechnologiesList machines_research("Machnies");
        machines_research.add_technology_to_list(automation_research_lvl_1);
        machines_research.add_technology_to_list(automation_research_lvl_2);
        machines_research.add_technology_to_list(automation_research_lvl_3);
        return machines_research;
    }
}
