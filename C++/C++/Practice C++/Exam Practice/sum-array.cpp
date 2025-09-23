#include<iostream>
using namespace std;
int main(){
    //variable declarations
    int size, sum=0;

    //Taking input from user 
    cout<<"Enter The Size of Array you wanted to take : ";
    cin>>size;
    int array[size];
    cout<<"Take Elements for Array : \n";
    for(int i=0; i<size;i++){
        cin>>array[i];
    }
    
    //Displaying Input Array Taken From User 
    
    cout<<"Display Elements of an Array : \n";
    for(int i=0; i<size;i++){
        cout<<array[i]<<"\t";
    }
    cout<<endl;

    //Sum of an Array

    cout<<"The Sum Of An Array Elements Is : ";
    for(int i=0;i<size;i++)
    {
        sum+=array[i];
    }
    cout<<sum;

}