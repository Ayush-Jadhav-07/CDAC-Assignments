#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Choose which operation do you want to perform : \n"<<endl;
    cout<<"Press 1 for Addition of numbers\n ";
    cout<<"Press 2 for Substraction of numbers\n ";
    cout<<"Press 3 for Multiplication of numbers\n ";
    cout<<"Press 4 for Division of numbers\n ";
    cin>>n;
    int sum=0,mul=1, a[2];
    switch (n)
    {
    case 1:
    cout<<"Enter the numbers :\n";
        for(int i=0;i<2;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<2;i++)
        {
            if(a[i]==0)
            {
                break;
            }
            sum+=a[i];
        }
        cout<<"The Total Numbers of Addition is : "<<sum<<endl;
        break;
    case 2:
    cout<<"Enter the numbers :\n";
        for(int i=0;i<2;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<2;i++)
        {
            if(a[i]==0)
            {
                break;
            }
            sum-=a[i];
        }
        cout<<"The Total number is after SUbstraction  : "<<sum<<endl;
        break;
    case 3:
    cout<<"Enter the numbers :\n";
    for(int i=0;i<2;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<2;i++)
        {
            if(a[i]==0)
            {
                break;
            }
            mul*=a[i];
        }
        cout<<"The Total Numbers of Addition is : "<<mul<<endl;
        break;
    case 4:
    cout<<"Enter the numbers :\n";
    for(int i=0;i<2;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<2;i++)
        {
            if(a[i]==0)
            {
                break;
            }
            mul=a[i]/mul;
        }
        cout<<"The Total Numbers of Addition is : "<<mul<<endl;
        break;
    default:
        cerr<<"Enter Valid Number!";
        break;
    }

}