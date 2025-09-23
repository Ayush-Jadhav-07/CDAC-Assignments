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
    bool isSort=true;
    for(int i=0;i<size;i++){
        if(arr[i]>arr[i+1])
        {
            isSort=false;
            break;
        }
    }
    if(isSort){
        cout<<"The Array is in Sorted Manner (Ascending order)"<<endl;
    }
    else{
        cout<<"The Array is not in Sorted Manner (Ascending order)"<<endl;

    }
}