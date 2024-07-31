#include<bits/stdc++.h>
using namespace std;
// bool isValid(string s){
//         stack<char> st;
//         for(int i=0;i<s.length();i++){
//             if(!st.empty() && s[i]==')' && st.top()=='('){
//                 st.pop();
//             }
//             else{
//                 st.push(s[i]);
//             }
//         }
//         return st.empty();
//     }
//     void solve(int n,string& str,vector<string>& ans){
//         if(str.length()==2*n)//jab length 2 x ho gya to check karo valid ke liye
//         {
//             if(isValid(str)){
//                 ans.push_back(str);
//             }
//             return;
//         }

//         // ya to '(' dalo ya close dalo  ise sari possiblity check ho raha yek bar '(' fir ')' dal kar dekho
//         str.push_back('(');
//         solve(n,str,ans);
//         str.pop_back();

//         str.push_back(')');
//         solve(n,str,ans);
//         str.pop_back();

//     }
//     vector<string> generateParenthesis(int n) {
//         vector<string> ans;
//         string str="";
//         solve(n,str,ans);
//         return ans;
        
//     }

// Optimal

// bool isValid(string s){
//         stack<char> st;
//         for(int i=0;i<s.length();i++){
//             if(!st.empty() && s[i]==')' && st.top()=='('){
//                 st.pop();
//             }
//             else{
//                 st.push(s[i]);
//             }
//         }
//         return st.empty();
//     }
//     void solve(int n,int open,int close,string& str,vector<string>& ans){
//         if(str.length()==2*n)//jab length 2 x ho gya to check karo valid ke liye
//         {
//             if(isValid(str)){
//                 ans.push_back(str);
//             }
//             return;
//         }

//         // ya to '(' dalo ya close dalo  ise sari possiblity check ho raha yek bar '(' fir ')' dal kar dekho
//         if(open<n){
//             str.push_back('(');
//             solve(n,open+1,close,str,ans);
//             str.pop_back();
//         }
//         if(close<open){
//             str.push_back(')');
//             solve(n,open,close+1,str,ans);
//             str.pop_back();

//         }

//     }
//     vector<string> generateParenthesis(int n) {
//         vector<string> ans;
//         string str="";
//         solve(n,0,0,str,ans);
//         return ans;
        
//     }
int main() {

return 0;
}