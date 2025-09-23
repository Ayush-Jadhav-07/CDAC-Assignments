#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the N numbers of series you want : ";
    cin>>n;
    int first=0, secound=1;
    cout<<"The Series is till "<<n<<" :\n";
    cout<<first<<"\t"<<secound<<"\t";
    for(int i=3;i<=n;i++)
    {
        int next=first+secound;
        cout<<next<<"\t";
        first=secound;
        secound=next;
    }
}