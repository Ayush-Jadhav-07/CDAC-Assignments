#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8};
    int merged[8];
    int size1 = 4, size2 = 4;
    for (int i = 0; i < size1; i++)
    {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        merged[size1 + i] = arr2[i];
    }
    cout << "Merged : ";
    for (int i = 0; i < size1 + size2; i++)
    {
        cout << merged[i];
    }
    cout << endl;
    int k = sizeof(merged) / 4;

    if (k % 2 == 0)
    {
        double median = (merged[k / 2] + merged[(k / 2) - 1]) / 2.0;
        cout << median << endl;
    }
    else
    {
        double median = merged[k / 2];
        cout << median << endl;
    }
}
