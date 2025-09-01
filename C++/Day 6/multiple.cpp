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
class Base1{
    public:  int collegecode;
             string college_name;
             void display();
                     
};
void Base1 ::  display(){

    cout<<"Enter College code \n";
    cin>>collegecode;
    cout<<"Enter College name\n";
    // getline(cin, student_name);
    cin>>college_name;
   

}

class Derived:public Base,public Base1{
    public:
    void putdata();
};
void Derived ::  putdata(){

    cout<<"Enter roll no :"<<roll_no<<endl;
    
    cout<<"Enter student name :"<<student_name<<endl;
    
    cout<<"Enter College id :"<<collegecode<<endl;
    cout<<"Enter College name :"<<college_name<<endl;

};
int main(){
    Base b;
   Derived d;
     d.getdata();
     d.display();
    d.putdata();
}