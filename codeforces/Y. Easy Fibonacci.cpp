#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int n1 = 0;
    int n2 = 1;

    if (n >= 1) {
        cout << n1;
    }
    if (n >= 2) {
        cout << " " << n2;
    }

    for (int i = 3; i <= n; ++i) {
        int n3 = n1 + n2;
        cout << " " << n3;

        n1 = n2;
        n2 = n3;
    }

    cout << endl;
    return 0;
}
