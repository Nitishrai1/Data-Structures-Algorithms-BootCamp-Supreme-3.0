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
bool searchword(TrieNode* root,string word,int index=0){
    if(index==word.length()){
        return root->isTerminal;
    }

    char ch=word[index];
    TrieNode* child;
    if(root->children.find(ch)!=root->children.end()){
        child=root->children[ch];
    }else{
        return false;
    }
    return searchword(child,word,index+1);


    
}
bool searchprefix(TrieNode* root,string word,int index=0){
    if(index==word.length()){
        return true;
    }

    char ch=word[index];
    TrieNode* child;
    if(root->children.find(ch)!=root->children.end()){
        child=root->children[ch];
    }else{
        return false;
    }
    return searchprefix(child,word,index+1);  
}
class Trie {
   
public:
    TrieNode* root;
    Trie() { 
        root=new TrieNode('-');
        root->isTerminal=false;
    }
    

    
    void insert(string word) {

        
        inertHelper(root,word);
        
    }
    
    bool search(string word) {
        bool ans=searchword(root,word);
        return ans;

        
    }
    
    bool startsWith(string prefix) {
        bool ans=searchprefix(root,prefix);
        return ans;
        
    }
};


int main() {

return 0;
}