#include<iostream>
using namespace std;
namespace ayush{
    void func()
    {
        cout<<"Inside Ayush's Namespace \n";
    }
}
namespace chandrakant{
    void fun(){
        cout<<"Inside Chandrakant's Namespace \n";
    }
}
int main()
{
    ayush::func();
    chandrakant::fun();
}