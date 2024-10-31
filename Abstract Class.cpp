#include <bits/stdc++.h>
using namespace std;

/* Abstract Class is a class that consist of Pure Virtual Function hence this function just makes the class as parent class only which perform no function i.e the object of Parent Class doesn't get created */

class person // Abstract Class
{
    public:
    virtual void give() = 0; // Pure Virtual Function
};

class boy : public person
{
    public:
    void give() {cout << "Blue Dress" << endl;}
};

class girl : public person
{
    public:
    void give() {cout << "Pink Dress" << endl;}
};

int main() 
{
    person *ptr = NULL;
    
    ptr = new boy();
    ptr -> give();
    
    ptr = new girl();
    ptr -> give();
    
    return 0;
}
