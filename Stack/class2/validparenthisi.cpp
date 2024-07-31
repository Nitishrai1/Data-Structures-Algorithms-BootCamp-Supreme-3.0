#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        for(char ch:s){
            if(!s1.empty() && ch=='}' && s1.top()=='{'){
                s1.pop();
            }
            else if(!s1.empty() && ch==']' && s1.top()=='['){
                s1.pop();
            }
            else if(!s1.empty() && ch==')' && s1.top()=='('){
                s1.pop();
            }
            else{
                s1.push(ch);
            }
        }
        if(!s1.empty()){
            return false;
        }
        return true;
        
    }
};
int main() {

return 0;
}