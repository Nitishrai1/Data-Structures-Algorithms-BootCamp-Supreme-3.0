// Misiing number
#include<bits/stdc++.h>
using namespace std;
  int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=(n*(n+1))/2;
        int sum2=0;
        for(int i=0;i<n;i++){
            sum2+=nums[i];
        }
        return sum-sum2;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans^=nums[i];
        }
        for(int i=0;i<=nums.size();i++){
            ans^=i;
        }
        return ans;
    }
int main() {

return 0;
}