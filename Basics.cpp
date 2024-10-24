#include <bits/stdc++.h>
using namespace std;

// Class is like a blueprint as a blueprint does not occupy space but the real house(object) does similarly class doesn't occupy any space.

class house
{
    private: // Access Specifier
    int length = 0, breadth = 0; // Member Variable
    
    public: // Access Specifier
    void set_data(int x, int y) // Member Function
    {
        length = x;
        breadth = y;
    }
    
    void area() // Member Function
    {
        cout << length * breadth << endl;
    }
};

int main() 
{
    house h1; // Object with Memory Allocated
    h1.set_data(500, 600);
    h1.area();

    house h2; // Object with Memory Allocated
    h2.set_data(300, 400);
    h2.area();
    
	return 0;
}