#include<bits/stdc++.h>
using namespace std;
void solve(TreeNode* root,int& mini,TreeNode*& prev){
        if(root==NULL)return;
      
        solve(root->left,mini,prev);
        if(prev){
            mini=min(mini,root->val-prev->val);
        }
        prev=root;
        
        solve(root->right,mini,prev);
    }
    int minDiffInBST(TreeNode* root) {
        int mini=INT_MAX;
        TreeNode* prev=nullptr;
        solve(root,mini,prev);
        
        return mini;
        
    }
int main() {

return 0;
}