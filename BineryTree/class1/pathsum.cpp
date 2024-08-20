#include<bits/stdc++.h>
using namespace std;
 bool solve(TreeNode* root,int target){
        if(root==NULL){
            
            return false;
        }
        if(root->left==NULL && root->right==NULL){
            return target==root->val;
        }
        
        bool left=solve(root->left,target-root->val);
        bool right=solve(root->right,target-root->val);
        return left||right;
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL && targetSum==0)return false;
        bool ans=solve(root,targetSum);
        return ans;
        
    }
int main() {

return 0;
}