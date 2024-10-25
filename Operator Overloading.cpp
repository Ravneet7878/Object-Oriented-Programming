#include <bits/stdc++.h>
using namespace std;

/* We can use operators such as (+, -, *, /) in the case of pre defined data types but in the of user defined data types such as (structure & class) we can't simply use these operator so there are 2 methods for using these operators :-
1. Traditional Method (Defining Function inside class to perform operation)
2. Operator Overloading */

class A 
{
    private:
    int weight;
    
    public:
    A(int x = 0) {weight = x;}
    
    public:
    A add_weight(A another) // Traditional Function For Addition
    {
        A temp;
        temp.weight = weight + another.weight;
        return temp;
    }
    
    public:
    A operator + (A another) // Operator Overloading Function For Addition
    {
        A temp;
        temp.weight = weight + another.weight;
        return temp;
    }
    
    public:
    void operator ++ () {++weight;} // Operator Overloading Function For Pre Increment
    
    public:
    void operator ++ (int) {weight++;} // Operator Overloading Function For Post Increment
    
    public:
    void get_data()
    {
        cout << "Weight of the person = " << weight << endl;
        cout << endl;
    }
};

int main() 
{
    A person1(63);
    person1.get_data();
    
    A person2(74);
    person2.get_data();
    
    A total;
    
    total = person1.add_weight(person2); // Traditional Method For Addition
    total.get_data();
    
    total = person2.add_weight(person1); // Traditional Method For Addition
    total.get_data();
    
    total = person1 + person2; // Operator Overloading For Addition
    total.get_data();
    
    ++total; // Operator Overloading For Pre Increment
    total.get_data();
    
    total++; // Operator Overloading For Post Increment
    total.get_data();
    
    return 0;
}
