#include <bits/stdc++.h>
using namespace std;

/* Necessary factors for making a Constructor :-
1. Name of the Constructor will be same as that of the Class
2. There will be no return type */

class A
{
    private: 
    int age;
    
    public:
    A(int x) // Constructor reduces the compile time as well as the code length
    {age = x;} 
    
    int get_data() {return age;}
};

int main() 
{
    A a_obj(28);
    cout << a_obj.get_data() << endl;

    return 0;
}