#include<bits/stdc++.h>
using namespace std;
int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int> q;
        for(int i=0;i<k;i++){
            q.push(arr[i]);
        }
        // k element push ho chuke hai ab remaning element ko back ya top me push kar
        for(int i=k;i<arr.size();i++){
            int element=arr[i];
            if(element<q.top())
            {
                q.pop();
                q.push(element);
            
            }
        }
        return q.top();
    }
int main() {

return 0;
}