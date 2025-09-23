#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"The the values of the elements : \n";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"The Greatest Number is A :"<<a<<endl;
    }
    else if(b>c)
    {
        cout<<"The Greatest Number is B :"<<b<<endl;
    }
    else{
        cout<<"The Greatest Number is C :"<<c<<endl;
    }
}