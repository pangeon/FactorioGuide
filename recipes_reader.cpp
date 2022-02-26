#include "recipes_reader.hpp"

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

string get_item_name_from_file_line()
{
    return "";
}
float get_item_production_time_from_file_line()
{
    return 0;
}
map<string, unsigned short int> get_item_production_resource_from_file_line()
{
    return map<string, unsigned short int> {{}};
}  

void print_file_content(vector<string> file_data)
{
    for(int i = 0; i < file_data.size(); i++) 
    {
        println(file_data[i]);
    }
} 