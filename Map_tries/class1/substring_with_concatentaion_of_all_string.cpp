#include<bits/stdc++.h>
using namespace std;
 vector<int> findSubstring(string s, vector<string>& word) {
        unordered_map<string,int> mp;
        for(string& str:word){
            mp[str]++;
        }
        vector<int> ans;

        int wordlength=word[0].size();
        for(int offset=0;offset<wordlength;offset++){
            unordered_map<string,int> visited;
            int count=0;
            for(int i=offset;i+wordlength<=s.length();i+=wordlength){
                string substr=s.substr(i,wordlength);
                if(mp.find(substr)==mp.end()){
                    visited.clear();
                    count=0;
                }else{
                    // iska maltab hai matach mila hai
                    visited[substr]++;
                    count++;
                    // game changes agar jada mil gya to delete kayse karoge
                    while(visited[substr]>mp[substr]){
                        string temp=s.substr(i-(count-1)*wordlength,wordlength);
                        visited[temp]--;
                        count--;
                    }
                    if(count==word.size()){
                        ans.push_back(i-(count-1)*wordlength);
                    }
                }
            }
        }
        return ans;
    }
int main() {

return 0;
}