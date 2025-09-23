#include <iostream>
using namespace std;
int main()
{
    int a[] = {5, 8, 6, 9, 4, 7};
    int size = sizeof(a) / sizeof(a[0]);
    cout<<size;
    cout << "The Elements of an array is : \n";
    for (int i = 0; i < size; i++)
    {
        if (a[i] != 0)
            cout << a[i] << "\t";
        else
            break;
    }

    int largest = a[0];
    for (int i = 1; i < size; i++)
    {
        if (largest < a[i])
        {
            largest = a[i];
        }
    }
    cout << "\nLargest Element in array element is : " << largest << endl; 

    int smallest = a[0]; 
    for (int i = 1; i < size; i++)
    {
        if (a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    cout << "Smallest Element in array element is : " << smallest << endl;
}