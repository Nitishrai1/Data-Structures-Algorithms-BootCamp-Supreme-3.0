#include<bits/stdc++.h>
using namespace std;
vector<int> rearrangeQueue(queue<int> &q){
        int size=q.size();
        queue<int> q2;
        int half=size/2;
        while(half--){
            q2.push(q.front());
            q.pop();
        }
        
        // first half= q2
        // second half=q
        int size2=q.size();
        vector<int> ans;
        while(size2--){
            ans.push_back(q2.front());
            q2.pop();
            ans.push_back(q.front());
            q.pop();
        }
        return ans;
        
        
    }
int main() {

return 0;
}