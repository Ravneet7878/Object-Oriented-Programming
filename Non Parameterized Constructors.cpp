#include <bits/stdc++.h>
using namespace std;

class person
{
    private: 
    string name;
    int age;
    float height;
    
    public:
    person() // Default Constructor
    {
        name = "Null";
        age = 0;
        height = 0.0f;
    } 
    
    void get_data() 
    {
        cout << "Name = " << name << endl;
        cout << "Age  = " << age << endl;
        cout << "Height = " << height << endl;
    }
};

int main() 
{
    person obj;
    obj.get_data();

    return 0;
}