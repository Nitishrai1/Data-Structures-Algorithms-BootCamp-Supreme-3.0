#include<bits/stdc++.h>
using namespace std;
int solvetoptodown(int n,vector<int>& dp){ 

    // isme check karna hot ahia konsa variabel funciton cll me cahnge ho raha us hisab se pata karte hai 1d dp 2d dp ya 3d dp cdcd
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