#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <iomanip>
#include <map>
#include <iostream>

using namespace std;

void println(string text); 
void print(string text);
void print_map_items(map<string, unsigned short int> collection);
void print_map_items(map<string, int> collection);
void print_vector_items(vector<string> collection, string label);
void print_round(float number_to_print, unsigned short int precision);

vector<string> split(vector<string> text, string separator);
vector<string> split(vector<string> text, string separator_1, string separator_2);
vector<string> explode(const string &text, char separator); 

vector<float> vector_string_to_float(vector<string> string_vector);
void print_file_content(vector<string> file_data);
string uppercase(string str);
string second_elem_in_map_pair_to_string(map<string, float> map_, string _elem); 