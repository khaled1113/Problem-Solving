#include <iostream>
#include <string>
using namespace std;

int main() {
    string n1, n2;
    cin >> n1 >> n2;

    int last_n1 = n1.back() - '0';
    int last_n2 = n2.back() - '0';
    int sum = last_n1 + last_n2;
  //in her we use n1,n2.back to get the last char of the string then we substract for'0' to convert it from char into int 

    cout << sum;

    return 0;
}
