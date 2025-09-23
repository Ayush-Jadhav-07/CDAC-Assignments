
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Elements :\n";
    cin>>n;

    if(n<2)
    return 0;

    int arr[n];
    cout<<"Enter "<<n<<" Elements :\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(largest<arr[i])
        {
            largest=arr[i];
        }
    }
    cout<<"First Largest Element is : "<<largest<<endl;

    int secondlargest=arr[0];
    bool found = false;
    for(int i=0;i<n;i++){
        if(arr[i]!=largest){
            if(!found || arr[i]>secondlargest)
        {
            secondlargest=arr[i];
            found=true;
        }
        }
    }

    if(found){
        cout<<"Second Largest Number of an array is :"<<secondlargest<<endl;
    }
    else{
        cout<<"No Second Largest Element found "<<endl;
    }

}
