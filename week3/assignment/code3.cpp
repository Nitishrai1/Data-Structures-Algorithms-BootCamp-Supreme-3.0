// 643. Maximum Average Subarray I
// Solved
// Easy
// Topics
// Companies
// You are given an integer array nums consisting of n elements, and an integer k.

// Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.

 

// Example 1:

// Input: nums = [1,12,-5,-6,50,3], k = 4
// Output: 12.75000
// Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75
// Example 2:

// Input: nums = [5], k = 1
// Output: 5.00000
 #include<bits/stdc++.h>
 using namespace std;
  double findMaxAverage(vector<int>& nums, int k) {
        // double avg=0;
        int n=nums.size();
        if(n==1) return nums[0];
        // // for(int i=0;i<=n-k;++i){
        // //     int sum=0;
        // //     for(int j=i;j<i+k;++j){
        // //         sum+=nums[j];
        // //     }
        // //     double temp=(double)sum/k;
        // //     avg=max(avg,temp);
        // // }
        // // int i=0;int j=i+k;
        // while(j<n){
        //     double sum=0;
        //     for(int k=i;k<j;k++){
        //         sum+=nums[k];
        //     }
        //     double temp=sum/k;
        //     avg=max(avg,temp);
        //     i++;
        //     j++;
        // }
        // return avg;
       
        int st=0;
        int windowsum=0;
        // int maxsum=INT_MIN;
        // for(int windowend=st;windowend<nums.size();windowend++){
        //     windowsum+=nums[windowend];
        //     if(windowend>=k-1){
        //         maxsum=max(maxsum,windowsum);
        //         windowsum-=nums[st++];
                
        //     }
        // }
        // return (double) maxsum/k;
        int right=0;
        int maxsum=INT_MIN;
        while(right<n){
            windowsum+=nums[right];
            if(right-st+1==k){
                maxsum=max(maxsum,windowsum);
                windowsum-=nums[st++];
            }
            right++;
        }
        return (double)maxsum/k;
    }
 int main() {
 
 return 0;
 }