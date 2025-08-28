#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++) {
            cout << " ";
        }
        for (int j = i; j <= 2 * i - 1; j++) {
            cout << j;
        }
        for (int j = 2 * i - 2; j >= i; j--) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
