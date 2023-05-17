#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    // Store the original values
    int original1 = n1, original2 = n2, original3 = n3;

    // Sort the numbers in ascending order
    int minValue = min({n1, n2, n3});
    int maxValue = max({n1, n2, n3});
    int middleValue = n1 + n2 + n3 - minValue - maxValue;

    cout << minValue << endl << middleValue << endl << maxValue << endl;
    cout << "" << endl;
    cout << original1 << endl << original2 << endl << original3 << endl;

    return 0;
}
