#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows (half diamond height): ";
    cin >> n;

    // Upper half of diamond
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int space = 1; space <= n - i; space++) {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of diamond
    for (int i = n - 1; i >= 1; i--) {
        // spaces
        for (int space = 1; space <= n - i; space++) {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
