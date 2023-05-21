#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

int main()
{
 
 int r;
 int s;
 cin>>r>>s;
 int diagonal_Square =s*sqrt(2);
 int radius =r*2;
    if(diagonal_Square<=radius){
        cout<<"Circle";

    }
    else if(s>radius){
        cout<<"Square";
    }
    else{
        cout<<"Complex";
    }
    }
