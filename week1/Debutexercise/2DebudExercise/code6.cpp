/*
Pattern for N = 5
1234554321
1234**4321
123****321
12******21
1********1
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j<<" ";

        }for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        for(int j=2;j<=i+1;j++){
            cout<<"* ";
        }
        for(int j=n-i;j>=1;--j){
            cout<<j<<" ";
        }
        cout<<endl;

    }

return 0;
}