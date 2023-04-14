#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int mul =((arr[i]/5)+1)*5;
        if(mul-arr[i]<3 && arr[i]>=38){
            arr[i]=mul;
            
        }
        cout<<arr[i]<<" "<<endl;
    }
}

