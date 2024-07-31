#include <iostream> 
using namespace std;

int main() {
    int n;
    cout << "Enter a number n:";
    cin >> n;

    int sum = 0;
    int i = 1;

    while (i <= n) {
        if (i % 2 == 0) {  // Check if i is even
            sum += i;      // Add i to sum if it's even
        }
        i++;               // Increment i for the next iteration
    }

    cout << "Sum of even numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}
