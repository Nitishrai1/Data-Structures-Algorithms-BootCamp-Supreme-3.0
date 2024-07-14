// 55. Jump Game
// Attempted
// Medium
// Topics
// Companies
// You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

// Return true if you can reach the last index, or false otherwise.

 

// Example 1:

// Input: nums = [2,3,1,1,4]
// Output: true
// Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
// Example 2:

// Input: nums = [3,2,1,0,4]
// Output: false
// Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.
 #include<bits/stdc++.h>
 using namespace std;
   bool solve(vector<int>& nums,int i){
        if(i==nums.size()-1){
            return true; //last index par pahuch gye
        }
        if(i>=nums.size())return false; //out of bound ho gye
        if(nums[i]==0)return false;// ab age nhai ja sakte
        // yek case ham dekh lete hia
        for(int jump=1;jump<=nums[i];jump++){
            bool ans=solve(nums,i+jump);
            if(ans)return true;
        }
        return false;
    }
    bool canJump(vector<int>& nums) {
        int i=0;
        return solve(nums,i);
        
    }
 int main() {
 
 return 0;
 }