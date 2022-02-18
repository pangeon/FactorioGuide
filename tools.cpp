#include <iostream>
#include <iomanip>
#include <map>
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
void print_map_items(map<string, int> collection) {
    for (auto& iter: collection) 
    {  
        cout << " -- " << iter.first << ": " << iter.second << '\n';  
    }  
}
void print_round(float number_to_print, int precision) 
{
    cout << fixed;
    cout << setprecision(precision);
    cout << number_to_print;
    cout << "\n";
}