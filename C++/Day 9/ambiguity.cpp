#include<iostream>
using namespace std;
class Abc{

    public: void show(){
        cout<<"this is Abc \n";
    }

};
class Xyz{

    public: void show(){
        cout<<"this is XYZ \n";
    }

};
class Def : public Abc, public Xyz
{

    public: 
    void display(){
        cout<<"hello";
    }

};
int main(){
    Def a;
    a.Abc::show();
    a.Xyz::show();
    //a.display();

}