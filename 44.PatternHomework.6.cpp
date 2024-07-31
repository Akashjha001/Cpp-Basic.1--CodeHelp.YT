#include <iostream>
using namespace std;

int main() {
    int n = 5;  // Number of rows in the pattern

    for (int i = 0; i < n; ++i) {
        // Print leading spaces
        for (int j = 0; j < i; ++j) {
            cout << " ";
        }

        // Print ascending numbers
        for (int j = 1; j <= n - i; ++j) {
            cout << j <<"  ";
        }

        // Print stars
        for (int j = 0; j < 2 * i - 1; ++j) {
            cout << "* ";
        }

        // Print descending numbers
        for (int j = n - i; j >= 1; --j) {
            if (j != n - i) { // Skip the middle number to avoid duplication
                cout << j <<" ";
            }
        }

        cout << endl;
    }

    return 0;
}
