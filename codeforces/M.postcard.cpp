#include <iostream>
 
using namespace std;
 
int main() {
    string password;
    int size;
    cin >> password >> size;
 
    int c = 0; // the count of characters in the string
    int l = 0; // the count of * and ?
    int j = 0; // the count of *
 
    for (int i = 0; i < password.size(); i++) {
        if (password[i] != '?' && password[i] != '*')
            c++;
        else
            l++;
        if (password[i] == '*')
            j++;
    }
 
    if (c == size) {
        for (int i = 0; i < password.size(); i++) {
            if (password[i] != '*' && password[i] != '?')
                cout << password[i];
        }
    } else if (c > size) {
        if (l >= c - size) {
            int t = 0;
            for (int i = 0; i < password.size(); i++) {
                if (password[i] >= 'a' && password[i] <= 'z' && (password[i + 1] == '*' || password[i + 1] == '?')) {
                    password[i] = '&';
                    t++;
                }
                if (t == c - size)
                    break;
            }
            for (int i = 0; i < password.size(); i++) {
                if (password[i] >= 'a' && password[i] <= 'z' && password[i] != '&')
                    cout << password[i];
            }
 
        } else {
            cout << "Impossible";
        }
    } else if (c < size) {
        if (j == 0) {
            cout << "Impossible";
        } else {
            int ind = 0;
            for (int i = 0; i < password.size(); i++) {
                if (password[i] == '*') {
                    ind = i;
                    break;
                }
            }
            for (int i = 0; i < password.size(); i++) {
                if (password[i] >= 'a' && password[i] <= 'z')
                    cout << password[i];
                if (i == ind) {
                    for (int z = 0; z < size - c; z++)
                        cout << password[i - 1];
                }
            }
        }
    }
 
    return 0;
}
