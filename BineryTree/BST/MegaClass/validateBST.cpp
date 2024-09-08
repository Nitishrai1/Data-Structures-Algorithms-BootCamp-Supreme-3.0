#include<bits/stdc++.h>
using namespace std;
 bool solve(TreeNode* root,int lb,int up){
        if(root==NULL)return true;

        if(root->val>lb && root->val<up){
            bool leftans=solve(root->left,lb,root->val);
            bool rightans=solve(root->right,root->val,up);
            return leftans && rightans;

        }else{
            return false;
        }
    }
    bool isValidBST(TreeNode* root) {
        // lower bound or upper bound se check kar lete hai
        int lower_bound=INT_MIN;
        int upper_bound=INT_MAX;
        return solve(root,lower_bound,upper_bound);
    }
int main() {

return 0;
}