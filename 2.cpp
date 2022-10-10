/*Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.
*/
#include<iostream>
using namespace std;

void set(int,int,int);
void display();
class time
{
  private:
      int hour,min,sec;
  public:
      void set(int h,int m,int s)
       {
         hour=h;
         min=m;
         sec=s;
       }
      void display()
       {
         cout<<"Time is: "<<hour<<" Hour   "<<min<<" Minutes   "<<sec<<" Seconds.";
       }
};

int main()
{
    time t1;
    int h,m,s;
    cout<<"Enter Hour: ";
    cin>>h;
    cout<<"Enter Minutes: ";
    cin>>m;
    cout<<"Enter Seconds: ";
    cin>>s;
    t1.set(h,m,s);
    t1.display();
    return 0;
}




















/*
1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number


#include<iostream>
using namespace std;

class Complex
    {
        public:
        int real;
        int img;

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
        Complex add(Complex a,Complex b)
         {
           Complex c;
           c.real=a.real+b.real;
           c.img=a.img+b.img;
           return c;
         }  
    };

int main()
{
    Complex c1,c2,c3,x;
    c1.input();
    c1.display();
    c2.input();
    c2.display();
    x=c3.add(c1,c2);

    cout<<"Sum is: "<<x.real<<"+"<<x.img<<"i";

    return 0;
} 
*/
