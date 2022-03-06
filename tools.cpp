#include "tools.hpp"

using namespace std;

void println(string text) 
{
    cout << text << endl;
}
void print(string text) 
{
    cout << text;
}
void print_map_items(map<string, unsigned short int> collection) {
    for (auto& iter: collection) 
    {  
        cout << " -- " << iter.first << ": " << iter.second << '\n';  
    }  
}
void print_round(float number_to_print, unsigned short int precision) 
{
    cout << fixed;
    cout << setprecision(precision);
    cout << number_to_print;
    cout << "\n";
}
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
vector<string> split(vector<string> text, string separator) 
{
    vector<string> result;
    int separator_position = 0;

    for(int i = 0; i < text.size(); i++) {
        separator_position = text[i].find(separator);
        result.push_back(text[i].substr(0, separator_position));
    }
    return result;
}
vector<string> split(vector<string> text, string separator_1, string separator_2) 
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
vector<string> explode(const string &text, char separator) 
{
    vector<string> result;
    stringstream string_stream (text);
    string item;

    while (getline (string_stream, item, separator)) {
        result.push_back (item);
    }
    return result;
}
vector<float> vector_string_to_float(vector<string> string_vector) 
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
void print_file_content(vector<string> file_data)
{
    for(int i = 0; i < file_data.size(); i++) 
    {
        println(file_data[i]);
    }
} 