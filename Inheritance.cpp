#include <bits/stdc++.h>
using namespace std;

class rectangle // Parent or Base class
{
    public:
    int length, breadth;
    
    public:
    void display() {cout << "Length = " << length << " " << "Breadth = " << breadth << " ";} 
    
    public:
    void area() {cout << "Area of the rectangle = " << length * breadth << endl;}
};

class cuboid : public rectangle // Child or Derived class
{
    public:
    int height;
    
    public:
    void show() {cout << "Height = " << height << endl;}
    
    public:
    void volume() {cout << "Volume of the rectangle = " << length * breadth * height << endl;}
};

int main() 
{
    cuboid temp;
    temp.length = 10, temp.breadth = 20, temp.height = 30;
    temp.display();
    temp.show();
    temp.area();
    temp.volume();
	
    return 0;
}
