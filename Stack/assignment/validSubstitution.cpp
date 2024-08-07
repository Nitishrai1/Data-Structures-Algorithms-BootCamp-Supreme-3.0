#include<bits/stdc++.h>
using namespace std;
 bool isValid(string s) {

        stack<int> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='c'){
                // ab c mila hai to b or a check karo hai ki nahi fir pop kar do
                if(!st.empty() && st.top()=='b'){
                    int ch=st.top();
                    st.pop();
                    if(!st.empty() && st.top()=='a'){
                        st.pop();
                    }else{
                        st.push(ch);
                    }
                }
                else{
                    st.push(s[i]);
                }
            }else{
                st.push(s[i]);
            }
        }
        return st.empty();
        
    }
int main() {

return 0;
}