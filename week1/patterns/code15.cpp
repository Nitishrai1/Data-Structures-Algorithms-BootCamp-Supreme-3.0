// Floyds Triagnle pattern
// 1
// 23
// 456
// 78910
// 1112131415
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    int cnt=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<cnt++;
        }cout<<endl;
    }

 
return 0;
}