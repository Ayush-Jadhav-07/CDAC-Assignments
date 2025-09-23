#include<iostream>
using namespace std;
int main(){
    int n, fact=1;
    cout<<"Enter the number that you want the factorial of : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout<<"The Factorial of "<<n<<" is :"<<fact<<endl;
}