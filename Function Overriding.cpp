#include <bits/stdc++.h>
using namespace std;

class base
{
    public:
    void msg() {cout << "Base Class" << endl;}
};

class derived : public base 
{
    public:
    void msg() 
    {
        cout << "Derived Class" << endl;
        base :: msg();
    }
};

int main() 
{
    derived d;
    d.msg();
	
    return 0;
}
