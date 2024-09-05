#include<bits/stdc++.h>
using namespace std;
 vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        priority_queue<int,vector<int>,greater<int>> minheap;
        for(vector<int>& part:arr){
            for(int i=0;i<part.size();i++){
                minheap.push(part[i]);
            }
        }
        vector<int> ans;
        while(!minheap.empty()){
            ans.push_back(minheap.top());
            minheap.pop();
        }
        return ans;
    }
int main() {

return 0;
}