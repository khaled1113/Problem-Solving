#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int r;
    float pi = 3.141592653;
    float area;
    cin >> r;
    area = pi * r * r;
    cout << fixed << setprecision(9) << area << endl;
}
