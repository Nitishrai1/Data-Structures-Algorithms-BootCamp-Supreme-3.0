#include<bits/stdc++.h>
using namespace std;
 TreeNode* LCA(TreeNode* root,TreeNode* p,TreeNode*q){
        if(root==NULL)return nullptr;
        // agar current node me ho koi 
        if(root==p || root==q)return root;
        // left me se le kar ao
        TreeNode* left=LCA(root->left,p,q);
        TreeNode* right=LCA(root->right,p,q);
        // 4 case bange agar
        if(left && right){
            return root;

        }
        
        else if(!left){
            return right;
        }
        
        return left;
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans=LCA(root,p,q);
        return ans;
        
    }
int main() {

return 0;
}