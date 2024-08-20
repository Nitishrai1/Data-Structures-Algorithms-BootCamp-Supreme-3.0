#include<bits/stdc++.h>
using namespace std;
int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int leftsubtree=height(root->left);
        int rightsubtree=height(root->right);
        bool status=(abs(leftsubtree-rightsubtree)<=1);
        bool l=isBalanced(root->left);
        bool r=isBalanced(root->right);
        return l&&r&& status;
        
    }
int main() {

return 0;
}