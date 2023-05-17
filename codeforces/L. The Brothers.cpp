
    #include <iostream>
    using namespace std;
     
    int main() {
        string name1, name2;
        getline(cin, name1);
        getline(cin, name2);
     
        // Extract last names
        string lastName1 = name1.substr(name1.find_last_of(' ') );
        string lastName2 = name2.substr(name2.find_last_of(' ') );
     
        if (lastName1 == lastName2) {
            cout << "ARE Brothers" << endl;
        } else {
            cout << "NOT" << endl;
        }
     
        return 0;
    }


//another solutio
#include <iostream>
using namespace std;

int main() {
    string name1, name2;
    cout << "Enter the first name: ";
    getline(cin, name1);
    cout << "Enter the second name: ";
    getline(cin, name2);

    // Extract last names
    string lastName1 = name1.substr(0, name1.find(' '));
    string lastName2 = name2.substr(0, name2.find(' '));

    if (lastName1 == lastName2) {
        cout << "They are brothers." << endl;
    } else {
        cout << "They are not brothers." << endl;
    }

    return 0;
}
