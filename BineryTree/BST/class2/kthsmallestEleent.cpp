#include<bits/stdc++.h>
using namespace std;
 void inorder(TreeNode* root,vector<int>& ans){
        if(root==nullptr) return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        inorder(root,ans);
        
        return ans[k-1];

        
    }
int main() {

return 0;
}