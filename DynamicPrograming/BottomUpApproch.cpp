#include<bits/stdc++.h>
using namespace std;
 int solvebottomup(int num){
        vector<int> dp(num+1,-1);
        if(num==0)return 0;
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=num;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[num];
    }
    // space optimise
     int solvebottomup(int num){
        vector<int> dp(num+1,-1);
        if(num==0)return 0;
        int prev=0;
        int curr=1;
        for(int i=2;i<=num;i++){
            int ans=prev+curr;
            prev=curr;
            curr=ans;
        }
        return curr;
    }
int main() {

return 0;
}