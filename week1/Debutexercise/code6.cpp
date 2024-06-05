/*
Pattern
N = 5
  *
 ***
*****
 ***
  *
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==n||i+j>n){
                cout<<"* ";

            }else{
                cout<<"  ";
            }
        }
        for(int k=2;k<=i;k++){
            cout<<"* ";
            
        }
        cout<<endl;
        
    }

    for(int i=0;i<n-1;i++){
        // orinting the traling space
        cout<<"    ";
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j = 0; j < 2 * (n - i-2) - 1; j++) {
            cout << "*";
        }
        cout<<endl;


        

    }


return 0;
}
