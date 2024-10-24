#include <bits/stdc++.h>
using namespace std;

class person
{
    private: 
    string name;
    int age;
    float height;
    
    public:
    person(string str, int x, float y) // Parameterized Constructor
    {
        name = str;
        age = x;
        height = y;
    } 
    
    person(person &obj1) // Copy Constructor
    {
        name = obj1.name;
        age = obj1.age;
        height = obj1.height;
    }
    
    void get_data() 
    {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Height = " << height << endl;
        cout << endl;
    }
};

int main() 
{
    person obj1("Ravneet", 24, 5.7);
    obj1.get_data();
    
    person obj2(obj1);
    obj2.get_data();

    return 0;
}