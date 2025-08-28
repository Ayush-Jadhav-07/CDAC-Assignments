#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // spaces
        for (int space = 0; space < n - i - 1; space++) {
            cout << " ";
        }
        // alphabets
        char ch = 'A';
        for (int j = 0; j <= 2 * i; j++) {
            cout << ch++ << " ";
        }
        cout << endl;
    }
    return 0;
}
