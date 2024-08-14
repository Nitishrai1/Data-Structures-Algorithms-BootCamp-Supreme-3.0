// minimum addtion to make a string valid
#include<bits/stdc++.h>
using namespace std;
 int minAddToMakeValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]==')'){
                if(!st.empty() && st.top()=='('){
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }
            else st.push(s[i]);
        }
        if(st.empty()){
            return 0;
        }
        return st.size();
        
    }
int main() {

return 0;
}