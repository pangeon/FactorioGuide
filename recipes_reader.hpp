#include <iostream>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>
#include "tools.hpp"

using namespace std;

vector<string> get_records_from_file(string file_path);
string get_item_name_from_file_line();
float get_item_production_time_from_file_line();
map<string, unsigned short int> get_item_production_resource_from_file_line();
void print_file_content(vector<string> file_data);

