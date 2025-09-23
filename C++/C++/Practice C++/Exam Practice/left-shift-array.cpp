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


    //left rotate array
    int num;
    cout<<"Enter How Many Numbers You Wanted to shift to left : ";
    cin>>num;

    num = num%size;

    int index;
    cout<<"Enter Which Index Element You Wanted To Shift :";
    cin>>index;

    cout<<"Elemnets After Left Shift Array : ";
    
    if(index<0 || index>=size){
        cout<<"Invalid Index!";
    }

            for(int i =0; i<num; i++){
                int current_index= index+i;
                int temp = array[current_index];
                array[current_index]=array[current_index-1];
                array[current_index-1]=temp;
            }


    for(int i =0;i<size;i++){
        cout<<array[i]<<"\t";
    }

}
