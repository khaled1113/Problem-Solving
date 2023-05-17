#include <iostream>
using namespace std;

int main() {
    // Read the input character
    char X;
    cin >> X;

    // Check if X is a digit
    if (isdigit(X)) {
        cout << "IS DIGIT" << endl;
    } else {
        // Check if X is uppercase or lowercase letter
        if (isupper(X)) {
            cout << "ALPHA" << endl;
            cout << "IS CAPITAL" << endl;
        } else {
            cout << "ALPHA" << endl;
            cout << "IS SMALL" << endl;
        }
    }

    return 0;
}
