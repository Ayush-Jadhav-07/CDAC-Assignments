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
    int even_count=0;
    int odd_count=0;
    for(int i=0; i<size;i++){
        if(arr[i]%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    cout<<"\n   The Count of the Even Number in the array is : "<<even_count<<endl;
    cout<<"The Count of the Odd Number in the array is : "<<odd_count<<endl;
}