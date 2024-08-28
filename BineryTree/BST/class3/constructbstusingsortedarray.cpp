#include<bits/stdc++.h>
using namespace std;
 TreeNode* solve(vector<int>& nums,int st,int end){
        if(end<st)return nullptr;
        int mid=st+(end-st)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=solve(nums,st,mid-1);
        root->right=solve(nums,mid+1,end);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int st=0;
        int end=nums.size()-1;
        
        TreeNode* ans=solve(nums,st,end);
        return ans;
        
    }
int main() {

return 0;
}