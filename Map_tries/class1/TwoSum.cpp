#include<bits/stdc++.h>
using namespace std;
 vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(auto& it:mp){
            cout<<it.first<<" "<<it.second<<endl;
        }
        
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int value=nums[i];
            int rem=target-value;
            if(mp.count(rem)==1 && i!=mp[rem]){
                // mil gya
                ans.push_back(i);
                ans.push_back(mp[rem]);
                break;  //break the loop
            }
        }
        return ans;
        
    }
int main() {

return 0;
}