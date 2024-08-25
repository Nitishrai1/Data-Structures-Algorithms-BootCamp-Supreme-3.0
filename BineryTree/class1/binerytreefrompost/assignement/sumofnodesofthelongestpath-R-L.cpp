#include<bits/stdc++.h>
using namespace std;
pair<int,int> solve(Node* root){
        if(root==nullptr)return {0,0};
        
        pair<int,int> left=solve(root->left);
        pair<int,int> right=solve(root->right);
        pair<int,int> ans;
        if(left.first==right.first){
            if(left.second>=right.second)
            ans=left;
            else{
                ans=right;
            }
        }else{
            if(left.first>right.first){
                ans=left;
            }else{
                ans=right;
            }
        }
        ans.first+=1;  //update kar dete hai first or second ko
        ans.second+=root->data;
        return ans;
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        pair<int,int> pair=solve(root);
        return pair.second;
    }
int main() {

return 0;
}