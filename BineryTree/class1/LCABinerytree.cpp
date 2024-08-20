#include<bits/stdc++.h>
using namespace std;
 TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return NULL;
        }
        // jis position par ho usko check kar lo
        if(root==p || root==q){
            return root;
        }
        // jis position par ho usko left right check kar lo
    
        TreeNode* left=lowestCommonAncestor(root->left,p,q);
        TreeNode* right=lowestCommonAncestor(root->right,p,q);
        if(left && right){
            return root; //yahi lca hai
        }
        if(left && !right){
            return left;
        }
        if(right && !left){
            return right;
        }

        return NULL;  //iska matlba hai ki lca present nahi hai
        
    }
int main() {

return 0;
}