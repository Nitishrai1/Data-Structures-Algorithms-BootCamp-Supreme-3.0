// WAP to create the fancy pattern
// *
// *1*
// *121*
// *12321*
// *121*
// *1*
// *

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;cout<<"*"<<endl;
    for(int i=0;i<n;i++){
        int cond=i<=n/2?2*i:2*(n-i-1);  //growing phase
        cout<<"*";
        for(int j=0;j<=cond;j++){
            if(j<=cond/2){
                cout<<j+1;
            }else{
                cout<<cond-j+1;
            }

        }cout<<"*";cout<<endl;
    }cout<<"*"<<endl;

return 0;
}