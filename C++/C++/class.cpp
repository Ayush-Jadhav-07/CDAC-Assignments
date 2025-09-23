#include<iostream>
using namespace std;
class car{
    public:
        string Brand;
        int Speed;

    void func()
    {
        cout<<"The Brand Of Car is "<<Brand<<" & the Speed is "<<Speed<<" Km/h."<<endl;
    }
};
int main(){
    car car1;
    car1.Brand = "Audi";
    car1.Speed = 180;

    car car2;
    car2.Brand = "BMW";
    car2.Speed = 200;

    car1.func();
    car2.func();
}