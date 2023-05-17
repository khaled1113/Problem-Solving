#include<iostream>
#include<string>
using namespace std;

int main ()
{
int A,B;
char S;
int output;
scanf("%d %c %d",&A,&S,&B);
if(S=='+')
{
output=A+B;
cout<<output;
}
else if(S=='-')
{
output=A-B;
cout<<output;

}
else if(S=='*')
{
output=A*B;
cout<<output;

}
else if(S=='/')
{
output=A/B;
cout<<output;

}
}
