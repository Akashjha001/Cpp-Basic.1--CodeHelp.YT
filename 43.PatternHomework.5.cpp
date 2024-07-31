#include <iostream>
using namespace std;

int main() {
    int n = 4;  // Number of rows in the pattern

    for (int i = 1; i <= n; ++i) {
        // Print leading spaces
        for (int j = 1; j < i; ++j) {
            cout << "  ";  // Single space
        }

        // Print numbers
        for (int j = i; j <= n; ++j) {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}
