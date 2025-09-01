#include<iostream>
#include<string.h>
using namespace std;
class student{
    int roll;
    int dd, mm,yyyy;
    float totalmarks;
    char name[50];
    int p,c,m;

    public:
        student(int, int, int, int, char[], int, int, int);
        void display();
};

student::student(int roll, int dd, int mm, int yyyy, char name[], int p, int c, int m)
{
    this ->roll = roll;
    this ->dd=dd;
    this ->mm=mm;
    this ->yyyy=yyyy;
    strcpy(this ->name, name);
    p=p;
    c=c;
    m=m;
}
void student::display()
{
    cout<<"Roll No. "<<roll <<endl <<"Name :"<<name<<endl<<"DOB :"<<dd<<"/"<<mm<<"/"<<yyyy<<endl<<"Total Marks :"<<p+c+m<<endl;

}
int main(){
    student s1(1, 21,11,2003, "Ayush",95,25,55);
    s1.display();
        student s2(2, 15,10,2003, "Amit",95,25,55);
    s2.display();
        student s3(3, 22,11,2003, "Chanrakant",95,25,55);
    s3.display();
        student s4(4, 14,11,2003, "Chinmay",95,25,55);
    s4.display();
        student s5(5, 30,11,2003, "Anand",95,25,55);
    s5.display();
        student s6(6, 11,11,2003, "Omkar",95,25,55);
    s6.display();
        student s7(7, 6,11,2003, "Vinayak",95,25,55);
    s7.display();
        student s8(8, 26,10,2003, "Shourya",95,25,55);
    s8.display();
        student s9(9, 26,11,2003, "Kapil",95,25,55);
    s9.display();
        student s10(10, 25,11,2003, "Amol",95,25,55);
    s10.display();
}