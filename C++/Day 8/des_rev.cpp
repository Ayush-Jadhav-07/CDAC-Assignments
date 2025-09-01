#include <iostream>
using namespace std;
static int count = 0;
class Abc
{

public:
    Abc()
    {
        cout<<this<<endl;
        count++;
        cout << "No. of Object created :" << count << endl;
    }
    ~Abc()
    {
        cout<<this<<endl;
        cout << "No. of Object destructed :" << count << endl;
        count--;
    }
};
int main()
{
    Abc a;
    cout<<&a<<endl;
    Abc b;
    cout<<&b<<endl;
    Abc c;
    cout<<&c<<endl;
}
