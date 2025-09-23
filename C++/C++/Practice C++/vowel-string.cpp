#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    int count=0;
    char low[5]={'a','e','i','o','u'};
    char upper[5]={'A','E','I','O','U'};
    cout<<"Enter the word you want : ";
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        for(int j=0;j<5;j++){
            if(s[i]==low[j] || s[i]==upper[j]){
                count++;
            }
        }
    }
    if(count==0){
        cout<<"The entered string has no any vowels included -\n Count = "<<count<<endl;
    }
        else{
        cout<<"The entered string has number of vowels -\n Count = "<<count<<endl;
    }

}