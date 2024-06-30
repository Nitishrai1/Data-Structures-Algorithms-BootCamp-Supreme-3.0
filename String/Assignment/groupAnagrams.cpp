// wap to find the group anagram in the given array of strings
#include<bits/stdc++.h>
using namespace std;
 vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // sort(strs.begin(),strs.end());
        // vector<vector<string>>  ans;
        // vector<bool> visited(strs.size(),false);
        // for(int i=0;i<strs.size();i++){
        //     if(visited[i])continue;

        //     vector<string> temp;
        //     temp.push_back(strs[i]);
        //     string sorted1=strs[i];
        //     sort(sorted1.begin(),sorted1.end());
        //     for(int j=i+1;j<strs.size();j++){
        //         if(visited[j])continue;
        //        string sorted2=strs[j];
        //        sort(sorted2.begin(),sorted2.end());
              
        //         if(sorted1==sorted2){
        //             temp.push_back(strs[j]);
        //             visited[j]=true;

        //         }
        //     }
        //     visited[i]=true;
        //     ans.push_back(temp);
        // }
        // return ans;
        unordered_map<string,vector<string>> mapstring;
        for(string s:strs){
            string sorted=s;
            sort(sorted.begin(),sorted.end());
            mapstring[sorted].push_back(s);
            
        }
        vector<vector<string>> ans;
        for(auto& pair:mapstring){
            ans.push_back(pair.second);
        }
        return ans;
    }
int main() {

return 0;
}