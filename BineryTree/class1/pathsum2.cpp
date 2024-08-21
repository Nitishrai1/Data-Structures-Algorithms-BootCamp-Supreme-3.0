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
    void solve(TreeNode* root,int target,int sum,vector<vector<int>>& ans, vector<int> path){
        if(root==NULL)return;
        sum+=root->val;
        path.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            if(sum==target){
                ans.push_back(path);
            }
            
            return;
        }
        solve(root->left,target,sum,ans,path);
        solve(root->right,target,sum,ans,path);
       
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum=0;
        vector<vector<int>> ans;
        vector<int> temp;
        solve(root,targetSum,sum,ans,temp);
        return ans;

        
    }
int main() {

return 0;
}