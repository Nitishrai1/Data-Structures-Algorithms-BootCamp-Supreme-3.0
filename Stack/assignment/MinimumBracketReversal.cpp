#include<bits/stdc++.h>
using namespace std;
void print(stack<char> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}
int countRev (string s)
{
    // your code here
    // yek kam kro jitana bhi unbalanced parenthtesis hai usko stack me store 
    // karo lo
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='{'){
            st.push(s[i]);
        }
        else if( !st.empty() && s[i]=='}'  && st.top()=='{'){
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    // ab yaha tak sara valid nikal gya hoga or unbalanced stack me bacha hoga
    // ab traverse karo agar same type a raha do to +1
    // agar different a raha to +2
    // cout<<st.size()<<endl;
    // print(st);
    int ans=0;
    if(st.size()%2!=0)return -1;
    while(!st.empty()){
        char ch=st.top();
        st.pop();
        char ch2=st.top();
        if((ch=='{' && ch2=='{' ) || (ch=='}' && ch2=='}')){
            ans+=1;
        }else if(ch=='}' && ch2=='{' || ch=='{' && ch2=='}'){
            ans+=2;
        }
        st.pop();
    }
    
    return ans;
}
int main() {

return 0;
}