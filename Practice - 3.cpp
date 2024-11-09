#include <bits/stdc++.h>
using namespace std;

class X
{
    public:
    virtual void Hello() {cout << "hello" << endl;}  // Base virtual function
};

class B : public X
{
    public:
    void Hello() override {cout << "bye" << endl;}  // Overrides X :: Hello with override keyword
};

int main() 
{
    X *ptr = new B();  
    ptr -> Hello();    
    
    return 0;
}