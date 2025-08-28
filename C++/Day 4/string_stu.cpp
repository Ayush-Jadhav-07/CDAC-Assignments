#include<iostream>
#include<string.h>
using namespace std;
class student{
    int rollno;
    char name[50];
    public:
    student()
    {
        rollno=101;
        strcpy(name, "Ayush");
    }
    student(int i, char* ptr ){
        rollno=i;
        strcpy(name, ptr);
    }
    void display()
    {
        cout<<"rollno is :\t"<<rollno<<endl;
        cout<<"name is :\t"<<name<<endl;
    }
};
int main(){
    student s1;
    s1.display();
    student s2(101, "Rohit");
    s2.display();
}