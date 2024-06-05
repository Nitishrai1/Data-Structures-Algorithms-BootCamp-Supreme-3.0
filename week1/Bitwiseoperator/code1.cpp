// Find the number of set bits that is number of 1 in the number
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    int set=0;
    while(n>0){
        int bit=n&1;
        set+=bit;
        n=n>>1;
    }
    cout<<set;

return 0;
}