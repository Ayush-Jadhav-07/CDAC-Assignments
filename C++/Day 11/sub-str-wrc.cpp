#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int size1 = 3, size2 = 3;
    int merged[6];
    
    // Copy arr1 to merged
    for (int i = 0; i < size1; i++)
        merged[i] = arr1[i];
    
    // Copy arr2 to merged
    for (int i = 0; i < size2; i++)
        merged[size1 + i] = arr2[i];
    
    // Print merged array
    cout << "Merged: ";
    for (int i = 0; i < size1 + size2; i++)
        cout << merged[i] << " ";
        
    return 0;
}