#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the table number you wanted to display : ";
    cin>>n;
    cout<<"The Table of "<<n<<" is:"<<endl;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
}