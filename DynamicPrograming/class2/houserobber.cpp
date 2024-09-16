#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(vector<int>& nums,int index,vector<int>& dp){
        if(index>=nums.size()){
            return 0;
        }
        if(dp[index]!=-1){
            return dp[index];
        }

        int take=nums[index]+solve(nums,index+2,dp);
        cout<<"take: "<<take;
        int notake=0+solve(nums,index+1,dp);
        cout<<"  notake: "<<notake;


        dp[index]=max(take,notake);    //simple hai sabse pahle check karte hai 1d hai ya 2d agar yek paramter change hota hai to 1d fir jaha store kar reha wala populate kar do base case ke nich return karo value agar -1 nahi hai to or last me returnkar dena
        return dp[index];
    }

    int solveusingtabulation(vector<int> arr){

        int n=arr.size();
        vector<int> dp(n+20,0);
        
        for(int i=n-1;i>=0;i--){
            int include=arr[i]+dp[i+2];
            int exclude=dp[i+1];
            dp[i]=max(include,exclude);    
        }
        return dp[0];
    }
    int rob(vector<int>& nums) {
        int index=0;
        // int n=nums.size();
        // vector<int> dp(n,-1);
        // int ans=solve(nums,index,dp);
        return solveusingtabulation(nums);
    }
};
int main() {

return 0;
}