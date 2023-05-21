#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;
 
int main() {
	int count=0;
long long s ,k,x,y,z;
cin>>k>>s;
for(int i=0;i<=k;i++){
 
	for(int j=0;j<=k;j++){
 
		for(int w=0;w<=k;w++){
 
 
if(i+j+w==s){
 
count+=1;
	
}
 
		}
	}
 
}
cout<<count;
 
}
