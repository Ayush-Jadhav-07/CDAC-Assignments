#include<iostream>
using namespace std;
int main(){
    int num, sum=0, sum1=0;
    cout<<"Enter The Number \n";
    cin>>num;
    while(num!=0){
        int rem = num%10;
        sum=sum+rem;
        num=num/10;
    }
   cout<<sum;
}
    
