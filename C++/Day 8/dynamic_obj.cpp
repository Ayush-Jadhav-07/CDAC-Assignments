#include<iostream>
using namespace std;
#include<string.h>
class String1{
    int len;
    char* ptr;
    public:
        String1(){
            len=1;
            ptr=new char;
            *ptr = 'A';
        }
        String1(char* s){
            len=strlen(s);
            ptr=new char[len+1];
            strcpy(ptr,s);
        }
        void display(){
            if(len>1)
            {
                cout<<"The Length of the char is "<<len<<endl;
                cout<<"The Chararcter is : "<<ptr<<endl;
            }
            else
            {
                cout<<"The Length of the char is "<<len<<endl;
                cout<<"The Chararcter is : "<<*ptr<<endl;
            }
        }
};
int main(){
    String1 s1;
    s1.display();
    String1 s2("Ayush");
    s2.display();
}