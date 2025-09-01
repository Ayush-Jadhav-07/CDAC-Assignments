#include <iostream>
using namespace std;
static int count = 0;
class Abc
{

public:
    Abc()
    {
        count++;
        cout << "No. of Object created :" << count << endl;
    }
    ~Abc()
    {
        cout << "No. of Object destructed :" << count << endl;
        count--;
    }
};
int main()
{
    Abc a, b, c, d;
}
