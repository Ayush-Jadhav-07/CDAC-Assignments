#include<iostream>
using namespace std;
class Demo{
    public:
            static int count;
            void call();
};
int Demo :: count=0;
void Demo:: call()
{
    Demo::count++;
    cout<<Demo::count<<endl;
}
int main()
{
    Demo d1;
    for(int i=0;i<6;i++)
    {
        d1.call();
    }
    return 0;
}