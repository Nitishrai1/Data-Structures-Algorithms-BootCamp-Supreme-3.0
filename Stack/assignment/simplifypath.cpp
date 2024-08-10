#include<bits/stdc++.h>
using namespace std;
 void solve(stack<string>& st, string& ans){
        if(st.empty()){
            return;
        }
        string minpath=st.top();
        st.pop();
        solve(st,ans);
        ans+=minpath;
    }
    string simplifyPath(string path) {
        stack<string> st;
        for(int i=0;i<path.size();){
            int start=i;
            int end=i+1;
            while(end<path.size() && path[end]!='/'){
                end++;
            }
            string minpath=path.substr(start,end-start);
            i=end;
            if(minpath=="/" || minpath=="/."){
                continue;
            }
            if(minpath!="/.."){
                st.push(minpath);
            }else if(!st.empty()){
                st.pop();
            }
        }
        if(st.empty()){
            return "/";
        }
        string ans="";
        // revers the stack
        solve(st,ans);
        return ans;
        
        
    }
int main() {

return 0;
}