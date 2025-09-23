#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    cout<<"Enter the String wanted to reverse : ";
    getline(cin, s1);
    for(int i=s1.length()-1;i>=0;i--){
        s2+=s1[i];
    }
    s2[s2.length()+1]='\0';
    cout<<"The Reverse String is : "<<s2<<endl;
}