// wap to find the longest commoan prefix in a vector of string
#include<bits/stdc++.h>
using namespace std;
 string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        for(int i=1;i<strs.size();i++){
            string s=strs[i];
            string temp="";
            for(int j=0;j<min(s.length(),ans.length());j++){
                if(ans[j]!=s[j])break;
                temp+=s[j];
            }
            ans=temp;
            if(ans.empty()){
                return  "";
            }
        }
        return ans;
 }
int main() {

return 0;
}