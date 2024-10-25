/* Write a program, take phone details as input and store them in object and use constructors.

Phone Details :-
1. Name
2. RAM 
3. Processor */

#include <bits/stdc++.h>
using namespace std;

class Phone
{
    private:
    string name;
    int ram;
    string processor;
    
    public:
    Phone(string str = "iPhone 16", int n = 8, string pro = "six core") // Parameterized Constructor Overloaded with Non Parameterized Constructor
    {
        name = str;
        ram = n;
        processor = pro;
    }
    
    Phone(Phone &obj2) // Copy Constructor
    {
        name = obj2.name;
        ram = obj2.ram;
        processor = obj2.processor;
    }
    
    void get_data()
    {
        cout << "Name of the phone = " << name << endl;
        cout << "Ram of the phone = " << ram << endl;
        cout << "Type of the processor = " << processor << endl;
        cout << endl;
    }
};

int main() 
{
    Phone obj1;
    obj1.get_data();
    
    Phone obj2("One Plus 10R", 12, "octa-core MediaTek Dimensity 8100 5G");
    obj2.get_data();
    
    Phone obj3(obj2);
    obj3.get_data();
    
	return 0;
}