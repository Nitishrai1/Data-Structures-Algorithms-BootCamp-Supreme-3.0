


// Code


// Testcase
// Test Result
// Test Result
// 416. Partition Equal Subset Sum
// Attempted
// Medium
// Topics
// Companies
// Given an integer array nums, return true if you can partition the array into two subsets such that the sum of the elements in both subsets is equal or false otherwise.

 

// Example 1:

// Input: nums = [1,5,11,5]
// Output: true
// Explanation: The array can be partitioned as [1, 5, 5] and [11].
// Example 2:

// Input: nums = [1,2,3,5]
// Output: false
// Explanation: The array cannot be partitioned into equal sum subsets.
#include<bits/stdc++.h>
using namespace std;
   bool solve(vector<int>& nums,int i,int sum){
        // base case agar i bahar chal gya nums.size() ke to pakka koi subset nhai bna hai ans ka
        if(i>=nums.size()) return false;
        // agar sum 0 ban gya matlab yek solu hai
        if(sum==0)return true;
        // agar sum -ve me chala jaye tab bhi false return kar do
        if(sum<0) return false;  //iska koi jarurt nahi hai
        // include 
        bool ans=solve(nums,i+1,sum-nums[i]);
        // exncude
        bool ans2=solve(nums,i+1,sum);
        return ans||ans2;


    }
    bool canPartition(vector<int>& nums) {
        // take the sum of all elment if it is even then only we can make subset equal to sum
        int sum=0;
        for(int i:nums){
            sum+=i;
        }
        // check for even 
        if(sum%2!=0){
            return false;
        }
        // ab recursive funciton banano jis agar sum/2 check karo agar mil gya to samzh lena ki hai ye
        return solve(nums,0,sum/2);

        
    }
int main() {

return 0;
}