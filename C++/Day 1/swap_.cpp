#include <iostream>
using namespace std;
void swap(int*, int*);
int main()
{
    int a = 10, b = 20;
    cout<<"Before Swapping \n";
    cout<<a<<"\t"<<b<<"\n";
    int temp = a;
    a=b;
    b=temp;
    cout<<"After Swap \n";
    cout<<a<<"\t"<<b;
}