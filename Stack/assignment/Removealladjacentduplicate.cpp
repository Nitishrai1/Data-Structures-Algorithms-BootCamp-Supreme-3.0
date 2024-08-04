#include<bits/stdc++.h>
using namespace std;
string removeDuplicates(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(!st.empty()){
                if(s[i]!=st.top()){
                    st.push(s[i]);
                }else{
                    st.pop();
                }
            }else{
                st.push(s[i]);
            }
        }
        string ans="";
        while(!st.empty()){
            char ch=st.top();
            ans+=ch;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
int main() {

return 0;
}