#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        // spaces
        for (int space = 0; space < n - i; space++) {
            cout << " ";
        }
        // stars
        for (int j = 0; j < (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
