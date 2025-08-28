#include<iostream>
using namespace std;
int main(){
   int num, count=0;
   cout<<"Enter The Number \n";
   cin>>num;
   if(num<2)
   {
    cout<<"Its not a prime number \n";
   }
   else{
    for(int i=2;i<num;i++)
   {
        if(num%i==0)
        {
            count++;
            break;
        }
   }
    if(count==0){
         cout<<"Its a prime number \n";
    }
    else{
         cout<<"Its not a prime number \n";
    }
   }
   
}