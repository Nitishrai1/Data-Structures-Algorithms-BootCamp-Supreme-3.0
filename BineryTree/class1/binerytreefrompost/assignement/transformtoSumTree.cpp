#include<bits/stdc++.h>
using namespace std;
int solve(Node* root){
        if(root==NULL)return 0;
        if(root->left==nullptr && root->right==nullptr){
            int leafdata=root->data;
            root->data=0;
            return leafdata;
        }
        int left=solve(root->left);
        int right=solve(root->right);
        int rootdata=root->data;
        root->data=left+right;
        return root->data+rootdata;
    }
    void toSumTree(Node *node)
    {
        solve(node);
    }
int main() {

return 0;
}