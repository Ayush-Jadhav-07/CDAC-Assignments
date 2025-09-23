#include<iostream>
using namespace std;
int main(){
    int n,rev=0,a; //n:Number , Rev:To store reverse number, a:for 1 by 1 storing
    cout<<"Enter the number you wanted to make reverse :";
    cin>>n; //123
    while (n>0){
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    cout<<"The Reverse Number of the entered number "<<n<<" is :"<<rev<<endl;
}