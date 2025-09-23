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

    //Check if sorted or not
    bool sorted=false;
    for(int i=0; i<size ; i++)
    {
        if(array[i]<=array[i+1])
        {
            sorted=true;
        }
        else{
            sorted=false;
            break;
        }
    }

    if(sorted==true){
        cout<<"The Array is in Sorted Non-Decreasing Order"<<endl;
    }
    else
    {
        cout<<"The Array is not in Sorted Non-Decreasing Order"<<endl;

    }
}
