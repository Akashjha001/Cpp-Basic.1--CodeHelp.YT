#include <iostream>
using namespace std;

int main() {
    // Variable declarations
    double fahrenheit, celsius;
    char choice;

    do {
        // Input Fahrenheit temperature
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;

        // Convert Fahrenheit to Celsius
        celsius = (fahrenheit - 32) * 5 / 9;

        // Output the result
        cout << "Temperature in Celsius: " << celsius << endl;

        // Ask user if they want to convert again
        cout << "Do you want to convert another temperature? (y/n): ";
        cin >> choice;

        // Check if user wants to convert another temperature
        if (choice != 'y' && choice != 'Y') {
            cout << "Exiting program...";
        }

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
