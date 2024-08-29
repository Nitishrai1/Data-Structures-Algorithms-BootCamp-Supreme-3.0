#include<bits/stdc++.h>
using namespace std;

 class Info{
    public:
    int minvalue;
    int maxvalue;
    int sum;
    bool isValid;
 };
class Solution {
public:
    int maxcalculator(int a,int b,int c){
        return max(a,max(b,c));
    }
    int mincalculator(int a,int b,int c){
        return min(a,min(b,c));
    }
    Info solve(TreeNode* root,int& ans){
        if(root==NULL){
            Info temp;
            temp.minvalue=INT_MAX;
            temp.maxvalue=INT_MIN;
            temp.sum=0;
            ans=max(ans,temp.sum);
            temp.isValid=true;
            return temp;
        }
        // agar leaf node hai tab
        if(root->left==NULL && root->right==NULL){
            Info temp;
            temp.minvalue=root->val;
            temp.maxvalue=root->val;
            temp.sum=root->val;
            ans=max(ans,temp.sum);
            temp.isValid=true;
            return temp;
        }
        // LRN call laga detea hai
        Info leftans=solve(root->left,ans);
        Info rightans=solve(root->right,ans);
        // mere pass left se answer a gya haui or right se bhi node ko check kar lete hai ab
        Info currentans;
        currentans.minvalue=mincalculator(leftans.minvalue,rightans.minvalue,root->val);
        currentans.maxvalue=maxcalculator(leftans.maxvalue,rightans.maxvalue,root->val);
        currentans.sum=leftans.sum+rightans.sum+root->val;
         currentans.isValid=(root->val>leftans.maxvalue && root->val<rightans.minvalue && leftans.isValid && rightans.isValid);

         if(currentans.isValid){
            ans=max(ans,currentans.sum);
         }
         return currentans;
            
        
    }
    int maxSumBST(TreeNode* root) {
        int ans=0;
        Info i=solve(root,ans);
        return ans;
        
    }
};
int main() {

return 0;
}