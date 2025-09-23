#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str1,str2="";
    cout<<"Enter First String : ";
    cin>>str1;
    for(int i=str1.length()-1;i>=0;i--){
        str2+=str1[i];
    }
    str2[str2.length()+1]='\0';
    cout<<"The Reverse String is : "<<str2;
}