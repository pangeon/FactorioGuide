#include "recipes_reader.hpp"

const vector<string> records_items = get_records_from_file("txt/recipes_production.txt");

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
vector<string> get_items_names_from_file_line()
{
    return split(records_items, ",");
}
vector<float> get_item_production_time_from_file_line()
{
    return vector_string_to_float(
        split(records_items, ",", "|")
    );
}
vector<string> get_item_production_resource_from_file_line()
{
    return split(records_items, "[", "]");
}