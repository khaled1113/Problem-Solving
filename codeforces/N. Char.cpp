#include<iostream>
using namespace std;

int main ()
{
	char ch;
	cin>>ch;

if(isupper(ch)){
//transfrorm to lower case
ch=tolower(ch);
cout<<ch;
}
else{
	ch=toupper(ch);
	cout<<ch;
}
}
