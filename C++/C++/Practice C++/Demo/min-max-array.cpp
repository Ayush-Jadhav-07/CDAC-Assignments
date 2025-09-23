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
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"Maximum Element in the array is : "<<max<<endl;
    int min=arr[0];
    for(int i=1;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"Minimum Element in the array is : "<<min<<endl;
}