#include<bits/stdc++.h>
using namespace std;
 void solve(TreeNode* root,int target,vector<vector<int>>& ans,vector<int> temp){
        if(root==NULL)return;

        if(root->left==nullptr && root->right==nullptr){
            if(root->val==target){
                temp.push_back(root->val);
                ans.push_back(temp);
            }
            return;
        }
        temp.push_back(root->val);
        solve(root->left,target-root->val,ans,temp);
        temp.pop_back();
        temp.push_back(root->val);
        solve(root->right,target-root->val,ans,temp);
        temp.pop_back();



    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(root,targetSum,ans,temp);
        return ans;
    }
int main() {

return 0;
}