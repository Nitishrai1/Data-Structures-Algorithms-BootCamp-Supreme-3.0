// 287. Find the Duplicate Number
// Solved
// Medium
// Topics
// Companies
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

 

// Example 1:

// Input: nums = [1,3,4,2,2]
// Output: 2
// Example 2:

// Input: nums = [3,1,3,4,2]
// Output: 3
// Example 3:

// Input: nums = [3,3,3,3,3]
// Output: 3
// //  
#include<bits/stdc++.h>
using namespace std;
 int findDuplicate(vector<int>& nums) {
        while(nums[0]!=nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];
        
    }
int main() {

return 0;
}