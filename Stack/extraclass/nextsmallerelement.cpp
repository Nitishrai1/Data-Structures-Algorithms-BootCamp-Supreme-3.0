#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>& st,int data,vector<int>& ans){
        
        if(st.top()<data){
            ans.push_back(st.top());
           
        }else{
            while(!st.empty() && st.top()>=data){
                st.pop();
            }
            if(st.empty()){
                ans.push_back(-1);
            }else{
                ans.push_back(st.top());
            }
        }
        st.push(data);
    }
	void immediateSmaller(vector<int>&arr) {
	    //  code here
	    stack<int> st;
        int n=arr.size();
	    st.push(-1);
	    vector<int> ans;
	    for(int i=n-1;i>=0;i--){
	        int num=arr[i];
	        solve(st,num,ans);
	    }
	    reverse(ans.begin(),ans.end());
	    for(int i=0;i<ans.size();i++){
	        arr[i]=ans[i];
	    }
	}
int main() {
    vector<int> arr;
    arr.push_back(9);
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(20);
    arr.push_back(3);
    immediateSmaller(arr);
    for(int i:arr){
        cout<<i<<" ";
    }


return 0;
}