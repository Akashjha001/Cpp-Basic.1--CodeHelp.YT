#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "Character is lowercase." << endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << "Character is uppercase." << endl;
    } else if (ch >= '0' && ch <= '9') {
        cout << "Character is numeric." << endl;
    } else {
        cout << "Character is neither a letter nor a digit." << endl;
    }

    return 0;
}


