#include<bits/stdc++.h>
using namespace std;
int search(vector<int> inorder,int target){
        for(int i=0;i<inorder.size();i++){
            if(inorder[i]==target)return i;
        }
        return -1;
    }
    TreeNode* createTree(vector<int>& preorder, vector<int>& inorder,int& preorderIndex,int inorderstart,int inorderend,int size){
        if(preorderIndex>=size)return nullptr;
        if(inorderstart>inorderend)return nullptr;

        int element=preorder[preorderIndex];
        preorderIndex++;
        TreeNode* root=new TreeNode(element);
        int index=search(inorder,element);
        root->left=createTree(preorder,inorder,preorderIndex,inorderstart,index-1,size);
        root->right=createTree(preorder,inorder,preorderIndex,index+1,inorderend,size);;
        return root;

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preorderIndex=0;
        int inorderstart=0;
        int inorderend=inorder.size()-1;
        int size=inorder.size();
        TreeNode* root=createTree(preorder,inorder,preorderIndex,inorderstart,inorderend,size);
        return root;

        
    }
int main() {

return 0;
}