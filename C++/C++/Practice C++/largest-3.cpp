#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 numbers :";
    cin>>a>>b>>c;
    if(a>b && a>c)
    cout<<"A is Greater than all :"<<a<<endl;
    else if(b>c)
    cout<<"B is Greater than all :"<<b<<endl;
    else
    cout<<"C is Greater than all :"<<c<<endl;
}