// 7. Define a class Greatest and define instance member function to find Largest among 3 numbers using classes.

#include<iostream>
using namespace std;

class Greatest
{
   public:
      int largest(int a,int b,int c)
       {
         return (a>b)? ((a>c)?a:c):((b>c)?b:c) ;
       }
};
int main()
{
   Greatest g1;
   int a,b,c;
   cout<<"Enter Three Numbers: \n";
   cin>>a>>b>>c;
   cout<<"Largest Number is: "<<g1.largest(a,b,c);
   return 0;

}