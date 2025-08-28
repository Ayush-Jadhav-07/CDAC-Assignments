#include <iostream>
using namespace std;
void swap(int*, int*);
int main()
{
    int a = 10, b = 20;
    cout << "Before Swaping \n";
    cout << "a=" << a << "\t" << "b=" << b << "\n";
    swap(&a, &b);
    cout << "After Swaping In Main \n";
    cout << "a=" << a << "\t" << "b=" << b << "\n";
}
void swap(int* p, int* q)
    {
        int temp;
        temp=*p;
        *p=*q;
        *q=temp;
        cout<<"After Swaping\n";
        cout<<"p="<<*p<<"\t"<<"q="<<*q<<"\n";
    }