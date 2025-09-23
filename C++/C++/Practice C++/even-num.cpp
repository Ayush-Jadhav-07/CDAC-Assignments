#include<iostream>
using namespace std;
int main(){
    int n,i=1,sum=0;
    cout<<"Enter Number till where you wanted to get even numbers : ";
    cin>>n;
    cout<<"The Even Number till "<<n<<" is:"<<endl;
    while(i<=n){
        if (i%2==0)
        {
            cout<<i<<" ";
        }
        if (i%2==0)
        {
            sum+=i;
        }
        i++;
    }
    cout<<"\n The Sum of all even numbers between 1 to "<<n<<" n is: "<<sum;
}