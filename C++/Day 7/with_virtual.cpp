#include <iostream>
using namespace std;
class Base
{
public:
    virtual void show(){
        
    };
};
class Derived : public Base
{
public:
    void show();
};
void Derived::show()
{
    cout << "hello I am Derived";
}
int main()
{
    Base *b1;
    Derived der;
    b1 = &der;
    b1->show();
}