#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int minValue = min({n1, n2, n3});
cout<<minValue<<" ";
   
    int maxValue = max({n1, n2, n3}); 
cout<<maxValue;
    return 0;
}
