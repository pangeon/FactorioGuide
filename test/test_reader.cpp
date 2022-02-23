#include <iostream>
#include <fstream>

using namespace std;

string split(string line, char delimiter)
{
    string result = "";

    for(int i = 0; i<(int) line.size(); i++)
    {
        if(line[i] != delimiter)
        {
            result += line[i];
        }
        else
        {
            result = "";
        }
    }
    return result; 
} 

int main() 
{
    int i = 0;
    fstream holder;
    string file_line;
    string data_tab[100];

    holder.open("../txt/recipes_production.txt");
    do 
    {
        getline(holder, file_line);
        data_tab[i] = file_line;
        i++;
    } 
    while(file_line != ""); 
    holder.close();

    for(int i = 0; i < sizeof(data_tab)/sizeof(*data_tab); i++) 
    {
        if (!data_tab[i].empty()) 
        {
            // cout << i << " -- " << data_tab[i] << endl;
        }
    }
    int pos_1 = data_tab[0].find("|");
    int pos_2 = data_tab[1].find("|");

    cout << " " << data_tab[0].substr(0, pos_1) << endl; 
    cout << " " << data_tab[1].substr(0, pos_2) << endl;

    return 0;
}