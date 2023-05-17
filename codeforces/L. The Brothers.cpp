//seaerching from the the end of the array and then substr this part as it was name1 string 
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


