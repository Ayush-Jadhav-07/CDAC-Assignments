#include<iostream>
#include<string.h>
#include<limits>
using namespace std;

class Base{
    public:  int roll_no;
              string student_name;
             void getdata();
                     
};
void Base ::  getdata(){

    cout<<"Enter roll no \n";
    cin>>roll_no;
    cout<<"Enter student name\n";
    // getline(cin, student_name);
    cin>>student_name;
   

}

class Derived:public Base{
    public:
    void putdata();
};
void Derived ::  putdata(){

    cout<<"Enter roll no :"<<roll_no<<endl;
    
    cout<<"Enter student name :"<<student_name;
    

};
int main(){
    Base b;
   Derived d;
     d.getdata();
    d.putdata();
}