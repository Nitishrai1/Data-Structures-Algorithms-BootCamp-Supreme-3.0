#include<bits/stdc++.h>
using namespace std;
int solvetoptodown(int n,vector<int>& dp){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n]=solvetoptodown(n-1,dp)+solvetoptodown(n-2,dp);
        return dp[n];
    }
int main() {

return 0;
}