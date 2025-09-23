#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int b,e,sum=1,i=1;
    cout<<"Enter the base and exponensial numbers : ";
    cin>>b>>e;

    //Using Cmath Function
    int power=pow(b,e);
    cout<<"The Power Using CMATH Function is : "<<power<<endl;

    //Using Logic of while loop
    while(i<=e)
    {
        sum*=b;
        i++;
    }
    cout<<"The Power of base "<<b<<" of exponensial "<<e<<" is : "<<sum<<endl;
}