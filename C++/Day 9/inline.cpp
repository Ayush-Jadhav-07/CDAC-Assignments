#include <iostream>
using namespace std;
inline int fun(int s) { return s * s * s; }
int main()
{
    cout << "The Cube of 3 is: " << fun(3) << endl;
    return 0;
}