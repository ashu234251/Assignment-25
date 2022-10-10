// 8. Define a class Rectangle and define an instance member function to find the area of the rectangle.

#include<iostream>
using namespace std;
class Rectangle
{
    public:
        int area(int l,int b)
         {
            return l*b;
         }
};
int main()
{
    Rectangle r1;
    int l,b;
    cout<<"Enter Length: ";
    cin>>l;
    cout<<"Enter Breadth: ";
    cin>>b;
    cout<<"Area of Rectangle is: "<<r1.area(l,b);
    return 0;
}