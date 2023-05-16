#include <iostream>
using namespace std;
  //when the equation of summation sum=(n^2+n)/2

int main() {
    long long n;
    cin >> n;

    long long sum = (n * (n + 1)) / 2;
    cout << sum << endl;

    return 0;
}
