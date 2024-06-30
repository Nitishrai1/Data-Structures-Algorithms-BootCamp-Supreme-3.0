// weap to check if two string is anagram or not
#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s==t;
        if(s.length()!=t.length())return false;
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            mp2[t[i]]++;
        }
        unordered_map<char,int>::iterator it=mp1.begin();
        while(it!=mp1.end()){
            char ch=it->first;
            int freq=it->second;
            if(mp2[ch]!=freq)return false;
            it++;
        }
        return true;
    }
int main() {

return 0;
}