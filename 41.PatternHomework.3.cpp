#include <iostream>
using namespace std;

int main() {
    int n = 4;  // Number of rows in the pattern
    int num = 1;  // Starting number

    for (int i = 1; i <= n; ++i) {
        // Print leading spaces
        for (int j = i; j < n; ++j) {
            cout << "   ";  // Three spaces
        }

        // Print numbers
        for (int j = 1; j <= i; ++j) {
            cout << num << "  ";
            ++num;  // Move to the next number
        }

        cout << endl;
    }

    return 0;
}
