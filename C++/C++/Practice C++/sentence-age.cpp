#include<iostream>
using namespace std;
int main(){
    string name;
    int age;
    cout<<"Enter the Name of the Person :";
    getline(cin, name);
    cout<<"Enter the Age of the Person :";
    cin>>age;
    cout<<"The Name of the Person is "<<name<<" And the age is "<<age<<endl;
}