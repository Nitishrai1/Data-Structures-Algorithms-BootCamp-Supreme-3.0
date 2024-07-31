// WAP to delete the middle element / return the mid element
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to delete middle element of a stack.
    void solve(stack<int>& s,int mid,int i){
        if(i==mid){
            // matlanb mid par a gye hai
            // s.pop();
           
            cout<<s.top();
            return;
        }
        int data=s.top();
        s.pop();
        solve(s,mid,i+1);
        s.push(data);
    }
    void deleteMid(stack<int>& s, int sizeOfStack) {
        // code here..
        // int size=s.size();
        int mid=sizeOfStack/2;
        solve(s,mid,0);
    }
};
int main() {

return 0;
}