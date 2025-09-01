#include<iostream>
using namespace std;
class employee{
    int id;
    public:
    employee();
    employee(int i);
    void display();
    int findsalary (){
        return 0;
    }
};
employee::employee(){
    cout<<"In default of emp \n";
    id=0;
}
employee::employee(int i){
    cout<<"In para of emp \n";
    id=i;
}
void employee ::display(){
    cout<<"id of an emp "<<id<<endl;
}
class wageemployee:public employee{
    int hr, rate;
    public:
    wageemployee();
    wageemployee(int, int, int);
    void display();
    int findsalary();
};
wageemployee::wageemployee(){
    cout<<"In default of emp \n";
    hr=0;
    rate=0;
}
wageemployee::wageemployee(int i, int h, int r) : employee(i){
    cout<<"In para of emp \n";
    hr=h;
    rate=r;
}
int wageemployee::findsalary(){
    return hr*rate;
}
void wageemployee ::display(){
    employee::display();
    cout<<hr<<endl;
    cout<<rate<<endl;
}
int main(){
    employee * ptr =new wageemployee(101, 5, 500);
    cout<<"Salary is "<<ptr->findsalary()<<endl;
    ptr->display();
}
