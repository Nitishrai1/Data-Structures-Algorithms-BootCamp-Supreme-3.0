#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void insertatBottom(stack<int>& st,int data){
        if(st.empty()){
            st.push(data);
            return;
        }
        int d=st.top();
        st.pop();
        insertatBottom(st,data);
        st.push(d);
    }
    void Reverse(stack<int> &st){
        if(st.empty()){
            return;
        }
        
        int data=st.top();
        st.pop();
        Reverse(st);
        insertatBottom(st,data); //backtrack karte jana 
        
        
    }
};
int main() {

return 0;
}