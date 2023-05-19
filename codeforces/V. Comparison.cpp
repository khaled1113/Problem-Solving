#include<iostream>
 
using namespace std;
 
int main(){
    int n1;
    int n2;
    char s;
    cin >> n1 >> s >> n2;
 
    if(s=='>'){
        if(n1>n2){
            cout << "Right" << endl;
        }
        else{
            cout << "Wrong" << endl;
        }
    }
    else if(s=='<'){
        if(n1<n2){
            cout << "Right" << endl;
        }
        else{
            cout << "Wrong" << endl;
        }
    }
    else if(s=='='){
        if(n1==n2){
            cout << "Right" << endl;
        }
        else{
            cout << "Wrong" << endl;
        }
    }
    else{
        cout << "Wrong" << endl;
    }
}
