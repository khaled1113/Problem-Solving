#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // Make arrays
    int arr[n];
    int arr2[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize maxNumber with the first element of arr
    int maxNumber = arr[0];

    // Make the elements of arr2 equal to elements of arr
    for (int i = 0; i < n; i++) {
        arr2[i] = arr[i];

        // Print the maximum number in arr2 so far
        maxNumber = max(maxNumber, arr2[i]);
        cout << maxNumber << " ";
    }

    return 0;
}
