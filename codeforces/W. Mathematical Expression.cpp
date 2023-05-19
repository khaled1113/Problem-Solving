#include<iostream>
 
using namespace std;
 
int main(){
    int n1;
    int n2;
    char s;
    char demo;
    int n3;
    cin>>n1>>s>>n2>>demo>>n3;
    if(s=='+'){
        if(n1+n2==n3){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<n1+n2<<endl;
        }
        
    }
    else if(s=='-'){
        if(n1-n2==n3){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<n1-n2<<endl;
        }
    }
    else if(s=='*'){
        if(n1*n2==n3){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<n1*n2<<endl;
        }
    }
    
