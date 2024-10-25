#include <bits/stdc++.h>
using namespace std;

class base
{
    public:
    base() {cout << "Non Pararmetrized / Default Constructor of the Base Class" << endl;}
    
    public:
    base(int b) {cout << "Pararmetrized Constructor of the Base Class" << " " << b << endl;}
};

class derived : public base 
{
    public:
    derived() : base() {cout << "Non Pararmetrized / Default Constructor of the Derived Class" << endl;}
    
    public:
    derived(int d) : base(d) {cout << "Pararmetrized Constructor of the Derived Class" << " " << d << endl;}
};

int main() 
{
    derived d1;
    cout << endl;
    derived d2(9);
	
    return 0;
}
