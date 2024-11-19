#include <bits/stdc++.h>
using namespace std;

/* Necesarry points regarding Deep Copy :-
1. Deep copy is done when object contains a pointer pointing to memory location outside the object, if we do the shallow copy the pointer of the copied object will also point to same memory location as the first object was pointing
2. In shallow copy the destructor would have destroyed the original object leading to release of memory location pointed by the pointer but since the pointer of copied object was also pointing it, it would continue to point empty (invalid) memory location making the pointer a Danling Pointer */

class Dummy
{
    private:
    int a, b;
    int *p;
    
    public:
    Dummy() {p = new int;}
    
    public:
    void set_data(int x, int y, int z)
    {
        a = x;
        b = y;
        *p = z;
    }
    
    public:
    void get_data() {cout << "a = " << a << " & " << "b = " << b << endl;}
    
    public:
    Dummy(Dummy &d)
    {
        a = d.a;
        b = d.b;
        p = new int;
        *p = *(d.p);
    }

    public:
    ~Dummy()
    {
        delete p;
    }

int main() 
{
    Dummy d1;
    d1.set_data(3, 4, 5);
    d1.get_data();
	
    Dummy d2(d1);
    d2.get_data();
	
    return 0;
}
