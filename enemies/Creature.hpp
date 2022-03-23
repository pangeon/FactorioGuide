#include <iostream>

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

        string get_name();
        void set_name();

        string get_desc();
        void set_desc();
        
        int_65535 get_health();
        void set_health();

        int_255 get_range();
        void set_range();
};