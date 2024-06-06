/*
Pattern for N = 4
   1
  212
 32123
4321234
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    int cnt=1;
    for(int i=0;i<=n;i++){
        
        for(int j=0;j<=n-i-1;j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }for(int j=2;j<i+1;j++){
            cout<<j<<" "; 

        }
        cout<<endl;
    }

return 0;
}