#include <bits/stdc++.h>
using namespace std;

/* Necessary factors for Function Overloading :-
1. Name of the function should be same
2. Data type of the parameter should be different or number of parameters should be different or seqence of the parameters should be different
3. Return type of the function should be same */

void display(int);
void display(string);

void add(int, int);
void add(int, int, int);

void multiply(int, double);
void multiply(double, int);

int main()
{
    display(2);
    display("Ravneet");
    
    cout << "\n";

    add(2, 3);
    add(2, 3, 4);

    multiply(2, 3.4);
    multiply(3.4, 2);

    return 0;
}

// Based on Data Types of the Parameter
void display(int n) {cout << n << endl;}
void display(string s) {cout << s << endl;}

// Based on Number of the Parameters
void add(int x, int y) {cout << x + y << endl;}
void add(int x, int y, int z) {cout << x + y + z << endl;}

// Based on Sequence of the Parameters
void multiply(int a, double b) {cout << a * b << endl;}
void multiply(double a, int b) {cout << a * b << endl;}