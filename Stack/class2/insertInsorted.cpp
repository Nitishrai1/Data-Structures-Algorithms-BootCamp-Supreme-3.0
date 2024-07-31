#include<bits/stdc++.h>
using namespace std;
void insertsorted(stack<int>& st,int data){
    if(st.empty()){
        st.push(data);
    }
    if(!st.empty() && st.top()<data){
        st.push(data);
        return;
    }
    int ele=st.top();
    insertsorted(st,data);
    st.push(ele);
}
void print(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}
int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    insertsorted(st,52);
    print(st);

return 0;
}