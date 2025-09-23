#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s1, s2="";
    cout<<"Enter First String : ";
    cin>>s1;
    for (int i=s1.length()-1;i>=0;i--)
    {
        s2+=s1[i];
    }
    cout<<"The Reverse string is : "<<s2<<endl;

    if(s1==s2)
    {
        cout<<"String is a Palindrome String : "<<s1<<endl;
    }
    else{
        cout<<"String is not a palindrome string : "<<s1<<endl;
    }
}