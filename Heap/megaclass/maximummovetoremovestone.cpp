#include<bits/stdc++.h>
using namespace std;
 int maximumScore(int a, int b, int c) {


        priority_queue<int,vector<int>> maxheap;
        maxheap.push(a);
        maxheap.push(b);
        maxheap.push(c);

        int ans=0;
        while(maxheap.size()>1){
            int first=maxheap.top();
            maxheap.pop();
            int second=maxheap.top();
            maxheap.pop();
            first-=1;
            second-=1;
            if(first>0)maxheap.push(first);
            if(second>0)maxheap.push(second);
            ans++;
        }
        return ans;
        
    }
int main() {

return 0;
}