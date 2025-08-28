#include<iostream>
using namespace std;

class Base{
    public:  int m1,m2,m3,sum;
              
             Base(int x,int y, int z);
                     
};
 Base ::  Base(int x,int y, int z){

    // cout<<"Enter m,m2,m3 \n";
    // cin>>m1>>m2>>m3;
    m1=x;
    m2=y;
    m3=z;
    
   

}

class Derived:public Base{
    public:
     Derived();
};
Derived ::  Derived():Base(10,20,30)
{

    sum=m1+m2+m3;
    cout<<"sum is "<<sum;

};
int main(){
    
   Derived d;
}