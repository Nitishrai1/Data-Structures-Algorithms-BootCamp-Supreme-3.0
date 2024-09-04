#include<bits/stdc++.h>
using namespace std;
int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> q;
        for(int i=0;i<k;i++){
            q.push(nums[i]);
        }
        for(int i=k;i<nums.size();i++){
            if(nums[i]>q.top()){
                q.pop();
                q.push(nums[i]);
            }
        }
        return q.top();
        
    }
int main() {

return 0;
}