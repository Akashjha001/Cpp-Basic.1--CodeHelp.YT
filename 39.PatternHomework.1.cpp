#include <iostream>
using namespace std;
int main() {
    int n = 4;  // Number of rows in the pattern
    for (int i = 0; i < n; ++i) {
        // Print leading spaces
        for (int j = 0; j < i; ++j) {
            cout << "   ";  // Three spaces
        }      // Print numbers
        for (int j = i + 1; j <= n; ++j) {
            cout << j << "  ";
        }
        cout << endl;
    }
     return 0;
}
