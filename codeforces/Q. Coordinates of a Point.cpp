#include<iostream>
#include<string>
using namespace std;
 
int main() {
    double n1, n2;
    cin >> n1 >> n2;
 
    // Check the quadrant or X/Y-axis based on n1 and n2
    if (n1 > 0 && n2 > 0) {
        cout << "Q1";
    } else if (n1 < 0 && n2 > 0) {
        cout << "Q2";
    } else if (n1 < 0 && n2 < 0) {
        cout << "Q3";
    } else if (n1 > 0 && n2 < 0) {
        cout << "Q4";
    } else if (n1 == 0 && n2 != 0) {
        cout << "Eixo Y";
    } else if (n1 != 0 && n2 == 0) {
        cout << "Eixo X";
    }
    else {
               cout<<"Origem";
    }
 
    return 0;
}
