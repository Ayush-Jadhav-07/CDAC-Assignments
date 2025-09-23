#include <iostream>
using namespace std;

void rightRotate(int arr[], int size, int k) {
    k = k % size;  // Handle k > size
    int temp[k];

    // Copy last k elements to temp
    for (int i = 0; i < k; i++)
        temp[i] = arr[size - k + i];

    // Shift remaining elements to the right
    for (int i = size - 1; i >= k; i--)
        arr[i] = arr[i - k];

    // Copy temp elements to beginning
    for (int i = 0; i < k; i++)
        arr[i] = temp[i];
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    rightRotate(arr, size, k);
    printArray(arr, size);

    return 0;
}
