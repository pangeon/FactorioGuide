#include <iostream>
#include <map>

using namespace std;

class Recipe 
{
    string name_of_tool;
    float production_time;
    map<string, int> materials_consuming;

    public:
        Recipe(string name_t);
        Recipe(string name_t, float p_time, map<string, int> m_consuming);

        void add_material(string name_of_material, int consuming_amount);
        void add_production_time(float production_time);

        void show_recipe();
};
