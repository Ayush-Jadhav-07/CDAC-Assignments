#include<iostream>
using namespace std;
int main(){
    int b,p,sum=1,i=1;
    cout<<"Enter the Base & Power Element : \n";
    cin>>b>>p;
    while(i<=p){
        sum=sum*b;
        i++;
    }
    cout<<sum<<endl;
}