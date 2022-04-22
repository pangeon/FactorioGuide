#include "TechnologiesList.hpp"

TechnologiesList::TechnologiesList(string t_technology_group_name) 
{
    technology_group_name = t_technology_group_name;
}
string TechnologiesList::get_technology_name()
{
    return technology_group_name;
}
void TechnologiesList::add_technology_to_list(Technology technology_item)
{
    technology_group.push_back(technology_item);
}
list<Technology> TechnologiesList::get_technology_group() {
    return technology_group;
}
void TechnologiesList::print_technology_list()
{
    for (Technology list_item : get_technology_group()) 
    {
        list_item.print_info_about_technlogy();
    }
}