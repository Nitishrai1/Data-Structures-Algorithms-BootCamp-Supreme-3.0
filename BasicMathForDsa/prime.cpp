// /WAP to print the prime number between 2 to n  by sive of erotothness
#include<bits/stdc++.h>
using namespace std;
void findprime(vector<bool>& ans,int n){
    ans[0]=ans[1]=false;
    for(int i=2;i<=sqrt(n);i++){
        if(ans[i]){
            int j=i*i;
            while(j<=n){
                ans[j]=false;
                j+=i;
            }
        }
    }
}
int main() {
    int n;
    cin>>n;
    vector<bool> arr(n+1,true);
    findprime(arr,n);
    for(int i=0;i<=n;i++){
        if(arr[i]) cout<<i<<" ";
    }

return 0;
}