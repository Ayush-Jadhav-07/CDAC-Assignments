#include<iostream>
using namespace std;
class Abc{

    public: Abc(){
        cout<<"this is Abc \n";
    }
    Abc(int a){
        cout<<"para of Abc \n";
    }

};
class Xyz{

    public: Xyz(){
        cout<<"this is XYZ \n";
    }
    Xyz(int b){
        cout<<"para of Xyz \n";
    }

};
class Def : public Xyz, public Abc
{

    public: Def(int a, int b):Abc(a),Xyz()
    {
        cout<<"this is Def \n";
    }
    Def(int x):Abc(x),Xyz()
    {
        cout<<"para of Def \n";
    }

};
int main(){
    Def a(10,10);
    Def b(5);
    return 0;
}