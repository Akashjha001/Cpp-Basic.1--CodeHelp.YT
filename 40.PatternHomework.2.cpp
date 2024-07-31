#include <iostream>
using namespace std;

int main() {
    int n = 4;  // Number of rows in the pattern

    for (int i = 1; i <= n; ++i) {
        // Print leading spaces
        for (int j = i; j < n; ++j) {
            cout << "   ";  // Three spaces
        }

        // Print the numbers
        for (int j = 1; j <= i; ++j) {
            cout << i << "  ";
        }

        cout << endl;
    }

    return 0;
}
