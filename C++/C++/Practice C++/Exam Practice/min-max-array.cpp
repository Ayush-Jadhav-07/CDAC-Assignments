#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter The Size of an Array : ";
    cin>>size;

    //Taking input from users
    int array[size];
    cout<<"Enter the Array Elements : \n";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    //display array elements 
    cout<<"The Elements in the Array are :\n";
    for(int i=0;i<size;i++){
        cout<<array[i]<<"\t";
    }
    cout<<endl;

    //finding max element in array 
    int max=array[0];
    for(int i=1;i<size;i++){
        if(max<array[i]){
            max=array[i];
        }
    }
    cout<<"The Maximum Element in the Array is : "<<max<<endl;

    //finding min element in array 
    int min=array[0];
    for(int i=1;i<size;i++){
        if(min>array[i]){
            min=array[i];
        }
    }
    cout<<"The Minimum Element in the Array is : "<<min<<endl;
}