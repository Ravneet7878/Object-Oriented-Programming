#include <bits/stdc++.h>
using namespace std;

class base
{
    public:
    virtual void msg() {cout << "Base Class" << endl;}
};

class derived_1 : public base
{
    public:
    void msg() {cout << "Derived_1 Class" << endl;}
};

class derived_2 : public base
{
    public:
    void msg() {cout << "Derived_2 Class" << endl;}
};

int main() 
{
    base *ptr_1 = new derived_1();
    ptr_1 -> msg();
    
    base *ptr_2 = new derived_2();
    ptr_2 -> msg();
    
    return 0;
}
