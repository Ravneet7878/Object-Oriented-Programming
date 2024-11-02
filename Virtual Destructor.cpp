#include <bits/stdc++.h>
using namespace std;

/* If we don't make base class destructor as virtual only base class destructor is called because the ptr we only access base class destructor but by making it virtual we can call both the base and derived the class destructors */

class base
{
    public:
    virtual ~base() {cout << "Base Class Destructor" << endl;}
};

class derived : public base
{
    public:
    ~derived() {cout << "Derived Class Destructor" << endl;}
};

int main() 
{
    base *ptr = new derived;
    delete ptr;
    
	return 0;
}