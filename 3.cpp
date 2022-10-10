// 3. Define a class Factorial and define an instance member function to find the Factorial of a number using class.

#include<iostream>
using namespace std;

int fact_calculate();
void setN(int);
int getN();

class factorial
{ 
    private:
      int n,f=1;
    public:
      void setN(int x)
       {
        n=x;
       }
      int getN()
       {
        return n;
       }
      int fact_calculate()
      {
        int i;
        for(i=1;i<=n;i++)
         {
            f=f*i;
         }
         return f;
      }
};

int main()
{
    factorial f1,f2;
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    f1.setN(n);
    f2.setN(6);
    cout<<"Factorial of "<<f1.getN()<<" is "<<f1.fact_calculate()<<endl;
    cout<<"Factorial of "<<f2.getN()<<" is "<<f2.fact_calculate();
    return 0;
}