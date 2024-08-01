#include<bits/stdc++.h>
using namespace std;
class Stack{
 public:
    int checkRedundancy(string s) {
        // code here
        stack<char> st;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch==')'){
                
                bool redundent=true;
                while(!st.empty() && st.top()!='('){
                    if(st.top()=='+' || st.top()=='-' || st.top()=='*' || st.top()=='/'){
                        redundent=false;
                    }
                    st.pop();
                }
                if(!st.empty() && st.top()=='('){
                    st.pop();
                }
                if(redundent)return 1;
                
            }
            else{
                st.push(ch);
            }
        }
        return 0;
    }
};
int main() {

return 0;
}