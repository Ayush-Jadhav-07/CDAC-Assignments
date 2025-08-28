#include <iostream>
using namespace std;
int main()
{
    int a[5], i;
    cout<<"Enter the Array Elements \n";
    for(i=0; i<=4; i++)
    {
        cin>>a[i];
    }
     cout<<"The Elements of Array is \n";
    for(i=0; i<=4; i++)
    {
        cout<<*(i+a)<<"\t";
    }
    cout<<endl;
}