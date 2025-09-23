#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size];

    // Input array elements
    cout << "Enter the array elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    cout << "\nOriginal Array:\n";
    for (int i = 0; i < size; i++) {
        cout << array[i] << "\t";
    }
    cout << endl;

    //Frequency Element Count
    int freq[size];
        for(int i=0 ; i<size;i++){
            freq[i]=0;
        }

    for(int i=0 ; i<size;i++){
        if (freq[i]!=-1){
            continue;
        }
        int count = 0;
        for(int j=i+1; j<size;j++)
        {
            if(array[i]==array[j])
            {
                count ++;
                freq[j]=0;
            }

        }
        freq[i]=count;
    }

    for(int i=0 ; i<size;i++){
        if(freq[i]!=0){
            cout<<array[i]<<"-"<<freq[i]<<endl;
        }
        }
}
