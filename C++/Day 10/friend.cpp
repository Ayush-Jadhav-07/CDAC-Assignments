#include<iostream>
using namespace std;
class Abc{
    int a;
    public: 
          Abc(){
            a=10;
          }
          void show();
          friend void display(Abc s);

};
void Abc::show(){
    cout<<a;
}
void display(Abc s){
  cout<<s.a;
}
int main(){
    Abc o;
    display(o);
}