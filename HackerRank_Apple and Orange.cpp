#include <bits/stdc++.h>

using namespace std;


int main()
{
    int r1,r2,a,o,n1,n2,ca=0,co=0;
    //1- take the region as input 
    cin>>r1>>r2;
    //take apples & oranges
    cin>>a>>o;
    //take n1 ,n2 as input
    cin>>n1>>n2;
    int arr1[n1];
    int arr2[n2];
    //take the input of array one 
    for(int i =0 ;i<n1;i++){
        cin>>arr1[i];
    }
    //take the input of array one 

    for(int i =0 ;i<n2;i++){
        cin>>arr2[i];
    }
    //the operation is to add a+ every number in arr1 and if it between 7 & 11 || ca+1
    for(int i=0;i<n1;i++){
        arr1[i]+=a;
        if(arr1[i]>=r1 && arr1[i]<=r2){
            ca++;
        }
    }
    //the operation is to add a+ every number in arr2 and if it between r1 & r2 || co +1
    for(int i=0;i<n2;i++){
        arr2[i] +=o;
        if(arr2[i]>=r1 && arr2[i]<=r2){
            co++;
        }
    }
    cout<<ca<<endl<<co;
    
}
