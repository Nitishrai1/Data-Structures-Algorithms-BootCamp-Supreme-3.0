#include<bits/stdc++.h>
using namespace std;
void solve(TreeNode* root,vector<int>& inorder){
        if(root==NULL)return ;
        solve(root->left,inorder);
        inorder.push_back(root->val);
        solve(root->right,inorder);
    }
    TreeNode* createBst(vector<int>& inorder,int st,int end){
        if(st>end)return nullptr;

        int mid=st+(end-st)/2;
        TreeNode* root=new TreeNode(inorder[mid]);
        root->left=createBst(inorder,st,mid-1);
        root->right=createBst(inorder,mid+1,end);
        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        // ye simple hai inorder vector me store kar lete hai fir mid se nikal lenege 
        vector<int> inorder;
        TreeNode* temp=root;
        solve(temp,inorder);
        TreeNode* root2=createBst(inorder,0,inorder.size()-1);
        return root2;
        
    }
int main() {

return 0;
}