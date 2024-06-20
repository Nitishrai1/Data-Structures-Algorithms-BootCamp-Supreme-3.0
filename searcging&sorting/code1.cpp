// k diff pair in an array 
#include<bits/stdc++.h>
using namespace std;
int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=1;
        set<pair<int,int>> ans;
        int n=nums.size();
        // int ans=0;
        while(j<n){
             int diff=nums[j]-nums[i];
            if(diff==k){
                ans.insert({nums[i],nums[j]});
                i++;
                j++;
            }
            else if(diff>k){
                i++;
            }
            else{
                j++;
            }
            if(i==j) j++;
        }
        return ans.size();
        
    }
int main() {

return 0;
}