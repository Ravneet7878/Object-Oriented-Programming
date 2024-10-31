#include <bits/stdc++.h>
using namespace std;

class Complex
{
    private:
    int real, imaginary;
    
    public:
    void set_data(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    
    public:
    void get_data()
    {
        cout << "The Real part of the number = " << real << endl;
        cout << "The Imaginary part of the number = " << imaginary << endl;
        cout << endl;
    }
};

int main() 
{
    Complex c;
    Complex *ptr = &c;
    (*ptr).set_data(2, 5);
    (*ptr).get_data();
    
    
    Complex *ptr_new = new Complex;
    (*ptr_new).set_data(3, 4);
    ptr_new -> get_data();
    
    
    // Array Of Objects
    Complex *arr = new Complex[5];
    Complex *arr_ptr = arr;
    
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter the value of Real & Imaginary part for the Complex Number " << i + 1 << " :-" << endl;
        
        int a, b;
        cin >> a >> b;
        
        arr -> set_data(a, b);
        arr++;
        
        cout << endl;
    }
    
    for(int i = 0; i < 5; i++)
    {
        cout << "For the Complex Number " << i + 1 << " :-" << endl;
        arr_ptr -> get_data();
        arr_ptr++;
    }
    
	return 0;
}