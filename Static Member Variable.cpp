#include <bits/stdc++.h>
using namespace std;

class Alpha
{
    private:
    int a;
    int b;
    
    public:
    Alpha() 
    {
        a = 5;
        b = 5;
        count++;
    }
    
    public:
    static int count;
};

int Alpha :: count = 0;

int main() 
{
    Alpha a1;
    Alpha a2;
    
    cout << "Value of count using object a1 = " << a1.count << endl;
    cout << "Value of count using object a2 = " << a2.count << endl;
    cout << "Value of count using Alpha = " << Alpha :: count << endl;
    
    return 0;
}
