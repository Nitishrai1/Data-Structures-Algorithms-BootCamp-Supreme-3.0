#include<bits/stdc++.h>
using namespace std;
 vector<int> topKFrequent(vector<int>& nums, int k) {
        // ye to simple hai frqnecny ke basis par maxheap bana lete hai
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        priority_queue<pair<int,vector<int>>,vector<pair<int,vector<int>>>> maxheap;
        for(auto& pair:mp){
            int freq=pair.second;
            int number=pair.first;
            maxheap.push({freq,{number}});
        }
        vector<int> ans;
        for(int i=0;i<k;){
            auto top=maxheap.top();
            maxheap.pop();
            ans.insert(ans.end(),top.second.begin(), top.second.end());
            i+=top.second.size();
        }
        return ans;

        // above is using the maxhesap
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minheap;
        for(auto& pair:mp){
            int freq=pair.second;
            int number=pair.first;
            minheap.push({freq,number});
            if(minheap.size()>k){
                minheap.pop();
            }
        }
        vector<int> ans;
        while(!minheap.empty()){
            ans.push_back(minheap.top().second);
            minheap.pop();
        }
        return ans; //this is using minheap
    }
int main() {

return 0;
}