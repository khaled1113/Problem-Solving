#include <iostream>
using namespace std;

int main() {
double n1,n2;
cin>>n1>>n2;
double  n=n1/n2;
int floor;
int celling;
int  round;

floor = n1/n2;
cout<<"floor "<<n1 <<" / "<<n2<<" = "<< floor<<endl;
celling = (n1+n2-1)/n2;
cout<<"ceil "<<n1 <<" / "<<n2<<" = "<< celling<<endl;
round = (n1+n2/2)/n2;
cout<<"round "<<n1 <<" / "<<n2<<" = "<< round<<endl;

}
