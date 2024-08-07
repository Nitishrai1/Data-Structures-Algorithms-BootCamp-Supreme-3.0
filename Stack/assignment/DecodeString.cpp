#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]==']'){
                string str="";
                while(st.top()!='['){
                    str=st.top()+str;  //is tarah ulta add hoga
                    st.pop();
                }
                st.pop();
                string numstr="";
                while(!st.empty() && isdigit(st.top())){
                    numstr=st.top()+numstr;
                    st.pop();
                }
                int n=stoi(numstr);
                string repeated="";
                for(int i=0;i<n;i++){
                    repeated+=str;
                }
                for(int i=0;i<repeated.length();i++){
                    st.push(repeated[i]);
                }

            }else{
                st.push(s[i]);
            }
        }
        string ans="";
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        
        return ans;
        
    }
};
int main() {

return 0;
}