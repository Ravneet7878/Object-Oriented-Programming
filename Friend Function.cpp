#include <bits/stdc++.h>
using namespace std;

/* Properties of Friend Function :-
1. Not in the scope of class
2. It cannot be called from the object of that class (i.e c1.sum_complex() == Invalid)
3. Can be invoked without the help of any object
4. Usually contains the objects as arguments
5. Can be declared inside public/private section of the class 
6. It cannot access memmbers directly by there names and need object_name.member_name to access any member */

class Complex
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
    void get_data() {cout << "The number is = " << a << " + " << b << "i" << endl;}
    
    friend Complex sum_complex(Complex obj1, Complex obj2); // It allows non member function (i.e sum_complex function) to access private data of class (i.e Complex)
};

Complex sum_complex(Complex obj1, Complex obj2) // It is not a Member Function
{
    Complex obj3;
    obj3.set_data(obj1.a + obj2.a, obj1.b + obj2.b);
    
    return obj3;
}

int main() 
{
    Complex c1;
    c1.set_data(5, 6);
    c1.get_data();
	
    Complex c2;
    c2.set_data(1, 4);
    c2.get_data();
	
    Complex sum;
    sum = sum_complex(c1, c2);
    sum.get_data();
	
    return 0;
}
