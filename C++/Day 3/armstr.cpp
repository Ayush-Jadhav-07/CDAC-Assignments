#include<iostream>
using namespace std;
int main(){
    int num, sum=0, sum1=0;
    cout<<"Enter The Number \n";
    cin>>num;
     int res=num;
    //  while(num!=0){
    //     int rem = num%10;
    //     sum=sum+rem;
    //     num=num/10;
    // }
    // cout<<"The Sum of the following Number is : \n"<<sum<<"\n";
    while(num!=0){
        int rem = num%10;
        sum1=sum1+rem*rem*rem;
        num=num/10;
    }
    if(res==sum1)
    {
        cout<<"Its an Armstrong Number : \t"<<sum1;
    }
    else{
        cout<<"Its not an armstrong number : \t"<<endl;
    }

}
    
