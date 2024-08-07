#include<bits/stdc++.h>
using namespace std;
// using stack
    queue<int> rev(queue<int> q)
    {
        // add code here.
        stack<int> st;
        while(!q.empty()){
            st.push(q.front());
            q.pop();
        }
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        return q;
    }
//   Recursive solution 
void reversequeue(queue<int>& q){
        if(q.empty()){
            return;
        }
        int data=q.front();
        q.pop();
        reversequeue(q);
        q.push(data);
        
    }
    queue<int> rev(queue<int> q)
    {
        // add code here.
        reversequeue(q);
        return q;
    }
int main() {

return 0;
}