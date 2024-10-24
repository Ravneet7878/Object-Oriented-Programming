#include <bits/stdc++.h>
using namespace std;

class person
{
    private: 
    string name;
    int age;
    float height;
    
    public:
    person(string str, int x, float y) 
    {
        name = str;
        age = x;
        height = y;
    } 
    
    void get_data() 
    {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Height = " << height << endl;
    }
};

int main() 
{
    person obj("Ravneet", 24, 5.7);
    obj.get_data();

    return 0;
}