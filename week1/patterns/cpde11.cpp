// wap to create a solid half diamong
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    for(int i=0;i<2*n-1;i++){
        int cnt=0;
        if(i<n){
            cnt=i;
        }
        else{
            cnt=n-(i%n)-2;
        }
        for(int j=0;j<=cnt;j++){
            cout<<"*";
        }cout<<endl;
        
        
    }

return 0;
}