// 6. Define a class Square to find the square of a number and write a C++ program to Count number of times a function is called.

#include<iostream>
using namespace std;
class Square
{
    private:
      int n;
    public:
      static int a;
      void set(int x)
       {
        n=x;
        a++;
       }
      int get()
       {
        return n;
       }
      int square()
       {
        return n*n;
       } 
};
int Square :: a=0;
int main()
{
    Square s1,s2;
    s1.set(5);
    s2.set(7);
    cout<<"Square of "<<s1.get()<<" is: "<<s1.square()<<endl;
    cout<<"Square of "<<s2.get()<<" is: "<<s2.square()<<endl;
    cout<<"Function set() is called "<<Square::a;
    return 0;
}