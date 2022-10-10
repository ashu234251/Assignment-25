// 9. Define a class Circle and define an instance member function to find the area of the circle.

#include<iostream>
using namespace std;
class Circle
{
    public:
        float area(int r)
         {
            return 3.14*r*r;
         }
};
int main()
{
    Circle c1;
    int r;
    cout<<"Enter Radius of Circle: ";
    cin>>r;
    cout<<"Area of Circle is: "<<c1.area(r);
    return 0;
}