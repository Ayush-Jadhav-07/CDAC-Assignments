#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array :  ";
    cin>>size;
    int arr[size];
    cout<<"Enter array elements : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The elements in the array are : \n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    int start=0, end=(size-1);
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }

    cout<<"The Reverse array is : \n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
}