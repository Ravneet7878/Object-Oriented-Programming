#include <bits/stdc++.h>
using namespace std;

// Destructor neither takes any argument nor returns any value

class num
{
    static int count; // Static member to keep track of the object count
    
    public:
    num() // Constructor
    {
        count++;
        cout << "This is the time when constructor is called for the object number " << count << "\n\n";
    }
    
    public:
    ~num() // Destructor
    {
        cout << "This is the time when destructor is called for the object number " << count << "\n\n";
        count--;
    }
};

int num :: count = 0;

int main() 
{
    cout << "We are inside our Main Function" << "\n\n";
    cout << "Creating first object obj1" << "\n\n";
    
    num obj1;
    
    {
        cout << "Entering this block" << "\n\n";
        cout << "Creating two more objects" << "\n\n";
        
        num obj2, obj3;
        
        cout << "Exiting this block" << "\n\n";
    }
    
    cout << "Back to Main Function" << "\n\n";
    
    return 0;
}
