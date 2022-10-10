// 4. Define a class LargestNumber and define an instance member function to find the Largest of three Numbers using the class.

#include<iostream>
using namespace std;

void setValues(int,int,int);
int largest();
class LargestNumber
{
   private:
      int a,b,c;
   public:
      void setValues(int x,int y,int z)
       {
        a=x;
        b=y;
        c=z;
       }
      int largest()
       {
         return (a>b)? ((a>c)?a:c):((b>c)?b:c) ;
       }
};
int main()
{
   LargestNumber l1;
   int a,b,c;
   cout<<"Enter Three Numbers: \n";
   cin>>a>>b>>c;
   l1.setValues(a,b,c);
   cout<<"Largest Number is: "<<l1.largest();
   return 0;

}