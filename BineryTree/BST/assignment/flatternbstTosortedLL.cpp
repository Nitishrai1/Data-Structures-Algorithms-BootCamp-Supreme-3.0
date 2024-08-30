#include<bits/stdc++.h>
using namespace std;
void solve(Node* root,vector<int>& inorder){
        if(root==nullptr)return;
        solve(root->left,inorder);
        inorder.push_back(root->data);
        solve(root->right,inorder);
    }
    Node *flattenBST(Node *root)
    {
        // inorder me stroer kar lete hai fir new bana kar bhej denge
        vector<int> inorder;
        solve(root,inorder);
        if(inorder.size()==0)return nullptr;
        Node* newnode=new Node(inorder[0]);
        Node* temp=newnode;
        for(int i=1;i<inorder.size();i++){
            temp->right=new Node(inorder[i]);
            temp=temp->right;
        }
        return newnode;
        
    } 
    // brute force
int main() {

return 0;
}