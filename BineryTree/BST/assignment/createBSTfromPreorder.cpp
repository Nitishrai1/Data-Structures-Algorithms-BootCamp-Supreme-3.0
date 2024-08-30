#include<bits/stdc++.h>
using namespace std;
 TreeNode* createBST(TreeNode* root,int val){
        if(val==0)return nullptr;
        if(root==NULL)return new TreeNode(val);
        if(root->val>val){
            root->left=createBST(root->left,val);
        }else{
            root->right=createBST(root->right,val);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size()<=0)return nullptr;
        TreeNode* root=nullptr;
        for(int i=0;i<preorder.size();i++){
            root=createBST(root,preorder[i]);
        }
        return root;
        
    }
int main() {

return 0;
}