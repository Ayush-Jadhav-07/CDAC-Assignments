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
        cout<<array[i]<<"\t";   //[1 2 3 4 5]
    }
    cout<<endl;

    //Reverse of array element
    int start=0, end=size-1; 
    while(start<end){
        int temp =array[start]; 
        array[start]=array[end]; 
        array[end]=temp; 

        start++;
        end--;
    }

    //Display Reverse array
    cout<<"The Reverse order of Array Elements is : ";
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<"\t";
    }

}