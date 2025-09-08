#include<iostream>
using namespace std;
class Abc{

    public: Abc(){
        cout<<"this is Abc \n";
    }

};
class Xyz{

    public: Xyz(){
        cout<<"this is XYZ \n";
    }

};
class Def : public Abc, public Xyz
{

    public: Def(){
        cout<<"this is Def \n ";
    }

};
int main(){
    Def a;
}