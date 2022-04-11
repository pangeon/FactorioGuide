#pragma once

#include <iostream>
#include <vector>

using namespace std;

using int_65535 = unsigned short int;
using int_255 = unsigned char;

class Creature 
{
    string name;
    string description;
    int_65535 health;
    int_255 range;

    public:
        Creature(
            string c_name, 
            string c_desc, 
            int_65535 c_health, 
            int_255 c_range
        );
        Creature();

        void set_name(string c_name);
        void set_desc(string c_desc);
        void set_health(int_65535 c_health);
        void set_range(int_255 c_range);

        vector<string> info_about_base_properties();
};