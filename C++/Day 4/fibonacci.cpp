#include<iostream>
using namespace std;
int main()
{
   int a=0, b=1, c=0;
   int num;
   cout<<"Enter The Length of Fibonacci Series : \t";
   cin>>num;
   for(int i=0; i<=num; i++)
   {
    c=a+b;
    a=b;
    b=c;
    cout<<a<<endl;
   }
}