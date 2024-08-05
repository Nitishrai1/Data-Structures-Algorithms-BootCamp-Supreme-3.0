#include<bits/stdc++.h>
using namespace std;
 vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long int> st;
        st.push(-1);
        vector<long long int> ans;
        for(long long int i=n-1;i>=0;i--){
            while(st.top()!=-1 && st.top()<=arr[i]){
                st.pop();
            }
            // ab yaha tak aye hai matlab ya to -1 ya to greater element hai
            if(st.top()==-1){
                ans.push_back(-1);
            }else{
                ans.push_back(st.top());
            }
            st.push(arr[i]);
            
        }
        // reverse order me bana hoga reverse kar do
        reverse(ans.begin(),ans.end());
        return ans;
    }
int main() {

return 0;
}