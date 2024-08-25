#include<bits/stdc++.h>
using namespace std;
 void solve(TreeNode* root,vector<TreeNode*>& arr){
        if(root==nullptr)return;
        // preorder karna hai store then call
        
        arr.push_back(root);
        solve(root->left,arr);
        solve(root->right,arr);
    }
    void flatten(TreeNode* root) {
        // yek kam karte hai vector me preorder store kar lete hai fir usko new treeNode bana kar bhej denge
        vector<TreeNode*> arr;
        if(root==nullptr)return;   //ye case importana hai nahi to error ayega isko mai bhul jata hu
        solve(root,arr);
        TreeNode* curr=root;
       for(int i=1;i<arr.size();i++){
        // i ko 1 se start is liye kiye hai kiu ki root ko nahi change karna hai
        curr->left=nullptr;
        curr->right=arr[i];
        curr=curr->right;
       }
    //    last me null point karwa dena
        curr->left=nullptr;
        curr->right=nullptr;
       
       
        
    }
    // optimal
    void flatten(TreeNode* root) {

        TreeNode* curr=root;
        while(curr){
            // left me predecor nikalo uske right ko curr ke right se set kar do
            if(curr->left){

                TreeNode* pred=curr->left;
                while(pred->right){
                    pred=pred->right;
                }
              
                pred->right=curr->right;
                curr->right=curr->left;
                curr->left=NULL;
                
            }
            curr=curr->right;
        }
        
    }
int main() {

return 0;
}