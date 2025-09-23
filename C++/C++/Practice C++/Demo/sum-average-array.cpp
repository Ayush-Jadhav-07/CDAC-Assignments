#include<iostream>
using namespace std;
int main(){
    int size,sum=0;
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
    cout<<"\nThe Sum of the Elements in array is : ";
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
    float average=sum/size;
    cout<<"The Average of the elements in array is : "<<average<<endl;
}