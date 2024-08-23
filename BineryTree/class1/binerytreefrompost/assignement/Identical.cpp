#include<bits/stdc++.h>
using namespace std;
 bool isPalindrome(vector<TreeNode*>& temp){
        if(temp.size()==1)return true;
        int st=0;
        int end=temp.size()-1;
        while(st<=end){
            TreeNode* l=temp[st];
            TreeNode* h=temp[end];
            if(!l && !h){
                st++,end--;
                continue;
            }
            if(!l && h || l && !h)return false;
            if(l->val!=h->val)return false;
            st++,end--;
        }
        return true;
    }
    bool isSymmetric(TreeNode* root) {
        // level order nikal lete hai or har level ke liye palindrome ka function bana denge

        queue<TreeNode*> q1;
        if(root==nullptr)return true;
        q1.push(root);

        while(!q1.empty()){
            int size=q1.size();
            vector<TreeNode*> temp;
            for(int i=0;i<size;i++){
                TreeNode* front=q1.front();
                temp.push_back(front);
                q1.pop();
                if(front){
                    q1.push(front->left);
                    q1.push(front->right);

                }
                
            }
            if(!isPalindrome(temp))return false;
        }
        return true;

        
        
    }
    // level order se tha ye


    // ab recurstion se hai
    bool check(TreeNode* left, TreeNode* right){
        if(left==nullptr && right== nullptr)return true;
        if(!left || !right )return false;
        if(left->val!=right->val)return false;
        return check(left->left,right->right) && check(left->right,right->left);
        return true;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr)return true;
        return check(root->left,root->right);
        
    }
int main() {

return 0;
}