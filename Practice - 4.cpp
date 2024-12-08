#include <bits/stdc++.h>
using namespace std;

/* Output :- 
 Constructor called
 Constructor called
 Destructor called
 
 Explaination :-
 This is the output because for the object 'a' destructor will be called automatically once the main function is executed completely as it is static memory allocation which is stored using stack whereas for the object 'a' we have to call destructor using delete as it is dynamic memory allocation which stored using heap.
*/

class person
{
    public:
    person() {cout << "Constructor called" << endl;}
    
    public:
    ~person() {cout << "Destructor called" << endl;}
};

int main() 
{
    person a;
    person *b = new person();
	
    return 0;
}
