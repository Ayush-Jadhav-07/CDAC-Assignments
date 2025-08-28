#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int p,r,t,n,ci;
    cout<<"Enter The Numbers \n";
    cin>>p>>r>>t>>n;
    ci=p*(1+r/n)*(pow(n,t));
    cout<<"The Compound Interest is :"<<ci;
    cout<<endl;
}