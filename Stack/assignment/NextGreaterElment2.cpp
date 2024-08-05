#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        int size=n*2;
        vector<int> arr(size);
        for(int i=0;i<2*n;i++){
            arr[i]=nums[i%n];
        }

        stack<int> st;
        st.push(-1);
        vector<int> ans(n,-1);
        for(int i=size-1;i>=0;i--){
            while(!st.empty() && st.top()<=arr[i]){
                st.pop();
            }
            if(i<n){
                if(!st.empty()){
                    ans[i]=st.top();
                }
            }
            st.push(arr[i]);

        }
        return ans;

        
        
    }
int main() {

return 0;
}