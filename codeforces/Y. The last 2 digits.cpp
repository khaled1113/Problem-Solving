#include <iostream>
 
using namespace std;
 
int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
 
    long long multiplication = ((A % 100) * (B % 100) * (C % 100) * (D % 100)) % 100;
 
    if (multiplication < 10) {
        cout << "0";
    }
 
    cout << multiplication << endl;
 
    return 0;
}
