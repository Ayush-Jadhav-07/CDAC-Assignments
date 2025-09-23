#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter Number :";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if(count!=0)
    cout<<"The Entered Number is not a prime number : "<<n;
    else
    cout<<"The Entered Number is a prime Number : "<<n;
}