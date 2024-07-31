// wap to check the stack is sorted or not
#include<bits/stdc++.h>
using namespace std;
bool checksorted(stack<int>& st, int ele){
    if(st.empty())return true;

    int data=st.top();
    if(data<=ele){
        st.pop();
        ele=data;
        bool forward=checksorted(st,ele);
        st.push(data);
        return forward;
    }else{
        st.push(data);
        return false;
    }


}
int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(2);
    st.push(40);
    int data=INT_MAX;
    if(checksorted(st,data)==true){
        cout<<"Sorted";
    }else cout<<"Not sorted";


return 0;
}