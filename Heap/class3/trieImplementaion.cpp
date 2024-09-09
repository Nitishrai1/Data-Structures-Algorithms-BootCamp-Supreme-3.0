#include<bits/stdc++.h>
using namespace std;
class TrieNode{
    public:
    char data;
    unordered_map<char,TrieNode*> children;
    bool isterminal;
    TrieNode(char value){
        data=value;
        isterminal=false;

    }

};

void insertintoTrie(TrieNode* root,const string& word,int index=0){
    // base case
    if(index==word.length()){
        // matlab sara character traverse ho gya hai
        root->isterminal=true;
        return;
    }

    char ch=word[index];
    TrieNode* child;
    if(root->children.count(ch)==1){
        child=root->children[ch];
    }else{
        child=new TrieNode(ch);
        root->children[ch]=child;
    }
    insertintoTrie(child,word,index+1);
}

bool searching(TrieNode* root,string& word,int index=0){
    // base case
    if(index==word.length()){
        // if(root->isterminal==true){
        //     return true;
        // }else{
        //     // iska matlab hai ki prefix present hai par word nahi
        //     return false;
        // }
        return root->isterminal;
    }

    char ch=word[index];
    TrieNode* child;
    if(root->children.find(ch)!=root->children.end()){
        child=root->children[ch];
    }else{
        // iska matlab hai ki present nahi hai
        return false;
    }
    return searching(child,word,index+1);
}



int main() {

    TrieNode* root=new TrieNode('-');
    insertintoTrie(root,"cover");
    insertintoTrie(root,"coat");
    insertintoTrie(root,"court");
    insertintoTrie(root,"title");
    insertintoTrie(root,"courtiyard");
    insertintoTrie(root,"titan");
    insertintoTrie(root,"nitish");

    // searching
    string st="cover";
    bool found=searching(root,st);
    if(found){
        cout<<"Word found";
    }else{
        cout<<"Not found";
    }



return 0;
}