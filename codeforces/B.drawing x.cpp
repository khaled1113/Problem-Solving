#include<iostream>
using namespace std;
// the equation of x    <<<  i == (n * n + 1) / 2
//the equation of \    i==(j*n)-(n-j)
//the equation of /    i==(j*n)-(j-1)

int main(){
    int n;
    int count;
    cout << "Enter the value of n: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        
        for(int j=1;j<n;j++){
           
              if(i==(j*n)-(n-j))
            {
            cout <<"\\"; 
            
            }
             else if(i == (n * n + 1) / 2)
            cout << 'x';
            

                 else if
                (i==(j*n)-(j-1)){ cout<<"/";
             
             }
                  else {
            cout<<"*";
            
            
            }
            
        }
        cout<<endl;
    }
}
