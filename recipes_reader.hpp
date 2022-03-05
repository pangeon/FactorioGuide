#include <string>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>
#include "tools.hpp"

using namespace std;

vector<string> get_records_from_file(string file_path);
vector<string> get_items_names_from_file_line();
vector<float> get_item_production_time_from_file_line();
vector<string> get_item_production_resource_from_file_line();
vector<string> get_item_production_resource_from_file_line_keys();
void print_file_content(vector<string> file_data);

