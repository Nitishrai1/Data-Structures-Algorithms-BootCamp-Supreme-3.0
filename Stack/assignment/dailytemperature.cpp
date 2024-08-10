#include<bits/stdc++.h>
using namespace std;
vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int> st;
        int n=temp.size();
        vector<int> ans(n);

        for(int i=0;i<n;i++){
            int ele=temp[i];
            while(!st.empty() && ele>temp[st.top()]){
                ans[st.top()]=abs(i-st.top());
                st.pop();
            }
            st.push(i);
        }
        return ans;
        
    }
int main() {

return 0;
}