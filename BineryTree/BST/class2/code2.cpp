// convert a binery tree to greate sum tree
#include<bits/stdc++.h>
using namespace std;
int main() {
  void solve(TreeNode* root,vector<int>& inorder){
        if(root==NULL)return;
        solve(root->left,inorder);
        inorder.push_back(root->val);
        solve(root->right,inorder);
    }
    int search(int val,vector<int>& arr){
        auto it=lower_bound(arr.begin(),arr.end(),val);
        int sum=accumulate(it,arr.end(),0);
        return sum;
    }
    void replace(TreeNode* root,vector<int>& inorder){
        if(root==nullptr)return;
        int sum=search(root->val,inorder);
        root->val=sum;
        replace(root->left,inorder);
        replace(root->right,inorder);
    }
    TreeNode* bstToGst(TreeNode* root) {
        // yek kam kar sakte hai ham isme innorder me store kar le fir har node me travers karenge or us node ke value ko un node val se vbade ka sum nikal kar replace mar deneg
        vector<int> inorder;
        solve(root,inorder);
        // taversse karte hai
        replace(root,inorder);
        return root;

        
    }
return 0;
}