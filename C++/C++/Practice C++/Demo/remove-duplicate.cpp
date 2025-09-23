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
    cout<<endl;
    cout<<"Remove Duplicate Elements from array :\n";
    // int arr1[size];
    // for(int i=0;i<size;i++){
    //     arr1[i]=arr[i];
    //     cout<<arr1[i]<<"\t";
    // }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<size-1;k++){
                    arr[k]=arr[k+1];
                }
                size--;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
}