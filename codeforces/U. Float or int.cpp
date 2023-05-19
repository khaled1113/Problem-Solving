#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
 
using namespace std;
 
int main() {
    double n;
    cin >> n;
 
    ostringstream output;
 
    if (floor(n) == n) {
        output << "int " << static_cast<int>(n);
    } else {
        int integerPart = static_cast<int>(n);
        double decimalPart = n - integerPart;
        output << "float " << integerPart << " " << decimalPart;
    }
 
    cout << output.str() << endl;
 
    return 0;
}
