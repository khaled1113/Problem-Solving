#include <iostream>
using namespace std;
 
int main() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
 
    int left_boundary = max(l1, l2);
    int right_boundary = min(r1, r2);
 
    if (left_boundary > right_boundary) {
        cout << -1 << endl;
    } else {
        cout << left_boundary << " " << right_boundary << endl;
    }
 
    return 0;
}
