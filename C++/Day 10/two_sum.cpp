#include<iostream>
using namespace std;
int main(){
    int a[]={2,11,7,15};
    int i,j;
    for(i=0;i<4;i++){
        for(j=1;j<4;j++){
            if(a[i]+a[j]==9)
            cout<<i<<j;
        }
    }
}