// 5. Define a class ReverseNumber and define an instance member function to find Reverse of a Number using class.

#include<iostream>
using namespace std;

int reverse(int);
class ReverseNumber
{
  public: 
     int reverse(int n)
      {
        int a,r;
        while(n)
        {
          a=n%10;
          n=n/10;
          r=r*10+a;
        }
        return r;
      }
};
int main()
{
    ReverseNumber r1;
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<"Reverse of "<<n<<" is: "<<r1.reverse(n);
    return 0;
}