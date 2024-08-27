// /.Two sum IV input is BST
#include<bits/stdc++.h>
using namespace std;
 void solve(TreeNode* root,vector<int>& inorder){
        if(root==NULL)return;
        solve(root->left,inorder);
        inorder.push_back(root->val);
        solve(root->right,inorder);
    }
    bool findTarget(TreeNode* root, int k) {
        // brute force
        // space use karenge
        vector<int> inorder;
        solve(root,inorder);

        // ab check kar let ehai
        // for(int i=0;i<inorder.size();i++){
        //     for(int j=i+1;j<inorder.size();j++){
        //         if(inorder[i]+inorder[j]==k)return true;
        //     }
        // }
        int st=0;
        int end=inorder.size()-1;
        while(st<end){
            if(inorder[st]+inorder[end]==k)return true;
            else if(inorder[st]+inorder[end]>k)end--;
            else st++;
        }
        return false;
        
    }
int main() {

return 0;
}