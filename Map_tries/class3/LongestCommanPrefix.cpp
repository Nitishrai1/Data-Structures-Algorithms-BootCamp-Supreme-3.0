#include<bits/stdc++.h>
using namespace std;
class TrieNode{
    public:
    char data;
    unordered_map<char,TrieNode*> children;
    bool isTerminal;
    TrieNode(char val){
        data=val;
        isTerminal=false;
    }
};
void inertHelper(TrieNode* root,string word,int index=0){
        if(index==word.length()){
            root->isTerminal=true;
            return;
        }
        char ch=word[index];
        TrieNode* child;
        if(root->children.find(ch)!=root->children.end()){
            child=root->children[ch];
        }else{
            child=new TrieNode(ch);
            root->children[ch]=child;
        }
        inertHelper(child,word,index+1);

    }
void findLCP(TrieNode* root,string& ans){
    // base case
    if(root->isTerminal==true){
        return;
    }

    TrieNode* child;
    if(root->children.size()==1){
        // single bachha hia
        for(auto& i:root->children){
            char ch=i.first;
            ans.push_back(ch);
            child=i.second;
        }
    }else{
        // jada bache hia
        return;
    }
    findLCP(child,ans);
}
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        TrieNode* root=new TrieNode('-');
        for(string &str:strs){
            inertHelper(root,str);
        }
        string ans="";
        findLCP(root,ans);
        return ans;
        
    }
};
int main() {

return 0;
}