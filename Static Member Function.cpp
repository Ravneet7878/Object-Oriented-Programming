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
    }
    
    public:
    static int count;
    
    public:
    static int get_count()
    {
        count++;
        return count;
    }
};

int Alpha :: count = 0;

int main() 
{
    Alpha a1;
    cout << "Value of count using object a1 = " << a1.get_count() << endl;
    
    Alpha a2;
    cout << "Value of count using object a2 = " << a2.get_count() << endl;
    
    cout << "Value of count using Alpha = " << Alpha :: get_count() << endl;
    
    return 0;
}
