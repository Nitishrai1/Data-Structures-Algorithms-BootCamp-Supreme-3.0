#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& inorder,int target){
        for(int i=0;i<inorder.size();i++){
            if(inorder[i]==target)return i;
        }
        return -1;
    }
    TreeNode* creatTree(vector<int>& inorder, vector<int>& postorder,int& postIndex,int inorderstart,int inorderend,int index){
        if(postIndex<index)return nullptr;
        if(inorderstart>inorderend) return nullptr;

        int element=postorder[postIndex];
        postIndex--;
        TreeNode* root=new TreeNode(element);
        int elementIndex=search(inorder,element);
        root->right=creatTree(inorder,postorder,postIndex,elementIndex+1,inorderend,index);
        root->left=creatTree(inorder,postorder,postIndex,inorderstart,elementIndex-1,index);
        return root;


    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postIndex=postorder.size()-1;
        int inorderstart=0;
        int inorderend=inorder.size()-1;
        TreeNode* root=creatTree(inorder,postorder,postIndex,inorderstart,inorderend,0);
        return root;
        
    }
int main() {

return 0;
}