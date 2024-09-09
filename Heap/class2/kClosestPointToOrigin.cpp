#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        priority_queue<pair<int,vector<int>>, vector<pair<int,vector<int>>>,greater<pair<int,vector<int>>>> minheap;

        // sare coordinate par traverse karte hai
        for(vector<int>& arr:points){
            int firstele=arr[0];
            int secondele=arr[1];
            int sum=((firstele-0)*(firstele-0)+(secondele-0)*(secondele-0));
            minheap.push({sum,{arr}});
        }
        vector<vector<int>> ans;
        for(int i=0;i<k;i++){
            ans.push_back(minheap.top().second);
            minheap.pop();

        }
        return ans;
        
    }
int main() {

return 0;
}