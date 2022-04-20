#include "tools.hpp"

using namespace std;

auto println(string text)-> void
{
    cout << text << endl;
}
auto print(string text) -> void
{
    cout << text;
}
auto print_map_items(map<string, unsigned short int> collection) -> void
{
    for (auto& iter: collection) 
    {  
        cout << " -- " << iter.first << ": " << iter.second << '\n';  
    }  
}
auto print_map_items(map<string, int> collection) -> void
{
    for (auto& iter: collection) 
    {  
        cout << " -- " << iter.first << ": " << iter.second << '\n';  
    }  
}
auto print_vector_items(vector<string> collection, string label) -> void 
{
    cout << label << endl;
    for(auto property : collection) 
    {
        cout << " -- " + property << endl;
    }
}
auto print_round(float number_to_print, unsigned short int precision) -> void
{
    cout << fixed;
    cout << setprecision(precision);
    cout << number_to_print;
    cout << "\n";
}
auto get_records_from_file(string file_path) -> vector<string>
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
auto split(vector<string> text, string separator) -> vector<string>
{
    vector<string> result;
    int separator_position = 0;

    for(int i = 0; i < text.size(); i++) {
        separator_position = text[i].find(separator);
        result.push_back(text[i].substr(0, separator_position));
    }
    return result;
}
auto split(vector<string> text, string separator_1, string separator_2) -> vector<string>
{
    vector<string> result;
    int seperator_position_1 = 0;
    int seperator_position_2 = 0;

    for(int i = 0; i < text.size(); i++) {
        seperator_position_1 = text[i].find(separator_1);
        seperator_position_2 = text[i].find(separator_2);
        result.push_back
        (
            text[i]
            .substr(seperator_position_1+1, seperator_position_2-(seperator_position_1+1))
        );
    }
    return result;
}
/* Adapted from Stack Overflow: 
https://stackoverflow.com/questions/14265581/parse-split-a-string-in-c-using-string-delimiter-standard-c */
auto explode(const string &text, char separator) -> vector<string>
{
    vector<string> result;
    stringstream string_stream (text);
    string item;

    while (getline (string_stream, item, separator)) {
        result.push_back (item);
    }
    return result;
}
auto vector_string_to_float(vector<string> string_vector) -> vector<float>
{
    vector<float> float_vector;
    for(int i = 0; i < string_vector.size(); i++) 
    {
        float_vector.push_back
        (
            stof(string_vector[i])
        );
    }    
    return float_vector;
}
auto print_file_content(vector<string> file_data) -> void
{
    for(int i = 0; i < file_data.size(); i++) 
    {
        println(file_data[i]);
    }
}
auto uppercase(string str) -> string
{
    for (auto & c: str) c = toupper(c);
    return str;
}
auto second_elem_in_map_pair_to_string(map<string, float> map_, string _elem) -> string
{
    return to_string(map_.find(_elem) -> second);
}   