// 10. Define a class Area and define instance member functions to find the area of the different shapes like square, rectangle , circle etc.

#include<iostream>
using namespace std;
float area(int);
float area(int,int);
float area(float);
class Area
{
    public:
       float area(int side)
        {
           return side*side;
        }
       float area(int l,int b)
        {
            return l*b;
        }
       float area(float r)
        {
            return 3.14*r*r;
        }
};
int main()
{
    Area a1,a2,a3;
    int side,l,b;
    float r;
    cout<<"Enter Side of Square: ";
    cin>>side;
    cout<<"Area of Square is: "<<a1.area(side)<<endl;
    cout<<"Enter Length of Rectangle: ";
    cin>>l;
    cout<<"Enter Breadth of Rectangle: ";
    cin>>b;
    cout<<"Area of Rectangle is: "<<a1.area(l,b)<<endl;
    cout<<"Enter Radius of Circle: ";
    cin>>r;
    cout<<"Area of Circle is: "<<a1.area(r);
    return 0;
}
