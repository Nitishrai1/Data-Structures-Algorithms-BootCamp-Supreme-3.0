#include<bits/stdc++.h>
using namespace std;
 vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(string& str:string_list){
            string s=str;
            sort(str.begin(),str.end());
            mp[str].push_back(s);
        }
        for(auto& pair:mp){
            ans.push_back(pair.second);
        }
        return ans;
    }

int main() {

return 0;
}