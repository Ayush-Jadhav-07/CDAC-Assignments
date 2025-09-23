#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter the elements in array :\n";
    for(int i=0; i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"The Array Elements are :\n";
    for(int i=0; i<5;i++)
    {
        cout<<arr[i]<<"\t";
    }
}