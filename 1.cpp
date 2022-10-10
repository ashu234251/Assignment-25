/*
1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number
*/


#include<iostream>
using namespace std;

class Complex
    {
        private:
        int real;
        int img;

        public:
        void input()
         {
            cout<<"Enter Real Part: ";
            cin>>real;
            cout<<"Enter Imaginary Part: ";
            cin>>img;
         }
        void display()
         {
            if(img<0)
             cout<<"Complex Number is: "<<real<<img<<"i";
            else
             cout<<"Complex Number is: "<<real<<"+"<<img<<"i";

             cout<<endl;
         }
        void add(Complex c)
         {
           cout<<"Sum is: "<< real+c.real<<"+"<<img+c.img<<"i";
         }  
    };

int main()
{
    Complex c1,c2;
    c1.input();
    c1.display();
    c2.input();
    c2.display();
    c1.add(c2);   // Later c1.+(c2) OR c1+c2;
    return 0;
}


