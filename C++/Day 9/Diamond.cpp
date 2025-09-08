#include<iostream>
using namespace std;
class Base{

    public: Base(){
        cout<<"this is Base \n";
    }

};
class Derived1:public virtual Base{

    public: Derived1(){
        //cout<<"this is D1 \n";
    }

};
class Derived2 : public virtual Base
{

    public: Derived2(){
       //cout<<"this is D2 \n";
    }

};
class Child :public Derived1,public Derived2
{

    public: Child(){
        //cout<<"this is Child \n";
    }

};
int main(){
Child c; 
}