#include<bits/stdc++.h>
using namespace std;
 int cnt=0;
    void pathfromOneNode(TreeNode* root,long long target){
        if(!root)return;
        if(target==root->val){
            cnt++;
        }
        pathfromOneNode(root->left,target-root->val);
        pathfromOneNode(root->right,target-root->val);
    }
    int pathSum(TreeNode* root, long long k) {
        
           if(root){
                pathfromOneNode(root,k);
                pathSum(root->left,k);
                pathSum(root->right,k);
                
            }
        return cnt;
        
        
    }
int main() {

return 0;
}