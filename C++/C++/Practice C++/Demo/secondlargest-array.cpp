#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array :";
    cin>>size;
    int arr[size];
    cout<<"Enter elements in the array :\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements in the array is :\n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }

    int largest =arr[0];
    for(int i=1;i<size;i++)
    {
        if(largest<arr[i])
        {
            largest=arr[i];
        }
    }
    int second_largest =arr[0];
    bool found=false;
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=largest){
            if(second_largest<arr[i]|| !found)
            {
                second_largest=arr[i];
                found=true;
            }
        }
    }
    if(found==true)
    cout<<"\nSecond Largest Elements in an array is : "<<second_largest<<endl;
    else
    cout<<"Second Largest not found."<<endl;
}