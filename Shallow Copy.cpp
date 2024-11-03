#include <bits/stdc++.h>
using namespace std;

class Dummy
{
    private:
    int a, b;
    
    public:
    void set_data(int x, int y)
    {
        a = x;
        b = y;
    }
    
    public:
    void get_data() {cout << "a = " << a << " & " << "b = " << b << endl;}
    
};

int main() 
{
    Dummy d1;
    d1.set_data(5, 6);
    d1.get_data();
	
    Dummy d2 = d1; // Copied using Copy Constructor
    d2.get_data();
	
    Dummy d3;
    d3 = d1; // Copied using Implicit Copy Assignment Operator
    d3.get_data();
	
    return 0;
}
