#include<bits/stdc++.h>
using namespace std;
string solve(TreeNode* root,vector<TreeNode*>& ans,unordered_map<string,int>& mp){
        if(root==nullptr)return "N";
        string s=to_string(root->val)+","+solve(root->left,ans,mp)+","+solve(root->right,ans,mp);
        if(mp[s]==1){
            ans.push_back(root);
        }
        mp[s]++;
        return s;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*> ans;
        unordered_map<string,int> mp;
        solve(root,ans,mp);
        return ans;
        
    }
int main() {

return 0;
}