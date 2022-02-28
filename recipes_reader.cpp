#include "recipes_reader.hpp"

vector<string> records_items = get_records_from_file("txt/recipes_production.txt");

vector<string> get_records_from_file(string file_path)
{
    fstream holder;
    string file_line;
    vector<string> records;

    holder.open(file_path);
    do 
    {
        getline(holder, file_line);
        records.push_back(file_line);
    } 
    while(file_line != "");

    sort(records.begin(), records.end());
    records.erase(records.begin());    
    
    holder.close();
    return records;
}
map<string, unsigned short int> vector_to_map(vector<string> string_chain) 
{
    string_chain = get_item_production_resource_from_file_line();
    map<string, unsigned short int> map_from_string_chain;
    map_from_string_chain.insert(pair<string, unsigned short int> ());
    return map_from_string_chain;
}

vector<string> get_items_names_from_file_line()
{
    vector<string> records_items_names;
    int seperator_position = 0;
    for(int i = 0; i < records_items.size(); i++) 
    {
        seperator_position = records_items[i].find(",");
        records_items_names.push_back(records_items[i].substr(0, seperator_position));
    }
    return records_items_names;
}

vector<float> get_item_production_time_from_file_line()
{
    vector<string> records_items_production_time;
    vector<float> records_items_production_time_values;

    int seperator_position_1 = 0;
    int seperator_position_2 = 0;
    
    for(int i = 0; i < records_items.size(); i++) 
    {
        seperator_position_1 = records_items[i].find(",");
        seperator_position_2 = records_items[0].find("|");
        
        records_items_production_time.push_back
        (
            records_items[i]
            .substr(seperator_position_1+1, seperator_position_2-(seperator_position_1+1))
        );
        records_items_production_time_values.push_back
        (
            stof(records_items_production_time[i])
        );
    }    
    return records_items_production_time_values;
}

vector<string> get_item_production_resource_from_file_line()
{
    vector<string> records_items_production_resource;
    int seperator_position = 0;
    for(int i = 0; i < records_items.size(); i++) 
    {
        seperator_position = records_items[i].find("|");
        records_items_production_resource.push_back
        (
            records_items[i]
            .substr(seperator_position+1)
        );
    }
    return records_items_production_resource;
}  

void print_file_content(vector<string> file_data)
{
    for(int i = 0; i < file_data.size(); i++) 
    {
        println(file_data[i]);
    }
} 