#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool letter(string s1, string s2) {
    int arr1[26] = {0};
    int arr2[26] = {0};
    
    // Count occurrences of lowercase and uppercase letters in s1
    for (int i = 0; i < s1.length(); i++) {
        if (isalpha(s1[i])) {
            if (islower(s1[i])) {
                arr1[s1[i] - 'a']++;
            } else {
                arr2[s1[i] - 'A']++;
            }
        }
    }

    // Check if there are enough occurrences of each letter in s2 in s1
    for (int i = 0; i < s2.length(); i++) {
        if (isalpha(s2[i])) {
            if (islower(s2[i])) {
                if (arr1[s2[i] - 'a'] <= 0) {
                    return false; // Letter not available in s1 or already used
                }
                arr1[s2[i] - 'a']--;
            } else {
                if (arr2[s2[i] - 'A'] <= 0) {
                    return false; // Letter not available in s1 or already used
                }
                arr2[s2[i] - 'A']--;
            }
        }
    }

    return true;
}

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    if (letter(s1, s2)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
