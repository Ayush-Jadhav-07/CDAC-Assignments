#include<iostream>
using namespace std;
class Test{
    int x;
    public: Test(int a){
        x=a;
    
    }
    void show(){
        cout<<x<<endl;
    }
    Test (Test *temp){
        x=temp->x;
    }
};
int main(){
    Test t1(80);
    t1.show();
    Test t2(t1);
    t2.show();
}