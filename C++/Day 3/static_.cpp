#include<iostream>
using namespace std;
void show();
int main()
{
   show();
   show();
   show(); 
}
void show(){
    static int y;
    cout<<y<<endl;
    y++;
}