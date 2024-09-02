#include<bits/stdc++.h>
using namespace std;
 TreeNode* solve(vector<int>& preorder,int& index,int bound){
        if(index==preorder.size() || preorder[index]>bound)return nullptr;
        TreeNode* root=new TreeNode(preorder[index++]);
        root->left=solve(preorder,index,root->val);
        root->right=solve(preorder,index,bound);
        return root;

    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        // upper bound use kar ke bana dete ahi 
        int i=0;
        return solve(preorder,i,INT_MAX);

        
    }
int main() {

return 0;
}