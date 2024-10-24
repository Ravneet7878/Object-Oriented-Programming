#include <bits/stdc++.h>
using namespace std;

class person
{
    private: 
    string name;
    int age;
    float height;
    
    public:
    person(string str = "Null", int x = 0, float y = 0.0f) // Parameterized Constructor Overloaded with Non Parameterized Constructor
    {
        name = str;
        age = x;
        height = y;
    } 
    
    person(person &obj2) // Copy Constructor
    {
        name = obj2.name;
        age = obj2.age;
        height = obj2.height;
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
    person obj1;
    obj1.get_data();
    
    person obj2("Ravneet", 24, 5.7);
    obj2.get_data();
    
    person obj3(obj2);
    obj3.get_data();

    return 0;
}
