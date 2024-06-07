// WAP to print the pattern
// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 7*8*9*10
// 4*5*6
// 2*3
// 1
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    int cnt=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<cnt++;
            if(j<i){
                cout<<"*";
            }
        }
        
        
        cout<<endl;
    }
    int start=cnt-n;

    for(int i=0;i<=n;i++){
        int k=start;
        for(int j=0;j<=n-i-1;j++){
            cout<<k++;
            if(j<i){
                cout<<"*";
            }
        }
        start=start-(n-i-1);
        cout<<endl;
    }

return 0;
}
