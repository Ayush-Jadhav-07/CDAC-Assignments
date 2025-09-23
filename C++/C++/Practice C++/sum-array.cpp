#include<iostream>
using namespace std;
int main(){
    int size,sum=0;
    cout<<"Enter the size of array : ";
    cin>>size;
    int a[size];
    cout<<"Enter the elements in array :\n";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }

    cout<<"The Elements in the array is :\n";
    for(int i=0;i<size;i++){
        cout<<a[i]<<"\t";
    }

    cout<<endl;

    for(int i=0;i<size;i++)
    {
        sum+=a[i];
    }
    cout<<"The Sum of all elements in array is : "<<sum<<endl;
}