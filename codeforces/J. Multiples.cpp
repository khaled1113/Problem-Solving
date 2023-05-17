#include <iostream>
using namespace std;

int main()
{
int n1,n2;
cin>>n1>>n2;
//want to know if n1 multiple of n2 and vice versa
if(n1%n2==0||n2%n1==0){
    cout<<"Multiples";
}
else{
    cout<<"No Multiples";
}
}
