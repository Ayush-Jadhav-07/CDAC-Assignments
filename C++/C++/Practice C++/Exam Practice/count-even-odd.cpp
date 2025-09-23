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

    //Count Of Even & Odd Elements in Array
    int count_even=0;
    int count_odd=0;
    for(int i=0;i<size;i++){
        if(array[i]%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }

    cout<<"The Count Of Even Numbers in the Array Elements is : "<<count_even<<endl;
    cout<<"The Count Of Odd Numbers in the Array Elements is : "<<count_odd<<endl;
}