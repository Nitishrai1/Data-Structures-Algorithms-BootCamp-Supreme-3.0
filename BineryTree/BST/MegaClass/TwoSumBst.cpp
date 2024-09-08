#include<bits/stdc++.h>
using namespace std;
class BSTIterator {
    stack<TreeNode*> st;
    stack<TreeNode*> prev;
    void pushleftNode(TreeNode* root){
        while(root){
            st.push(root);
            root=root->left;
        }
    }
     void pushrightNode(TreeNode* root){
        while(root){
            prev.push(root);
            root=root->right;
        }
    }
public:
    BSTIterator(TreeNode* root) {
        pushleftNode(root);
        pushrightNode(root);
        
    }
    
    int next() {
        TreeNode* top=st.top();st.pop();

        if(top->right){
            // left me ja kar sare left dal do
            pushleftNode(top->right);
        }
        return top->val;
        
    }
    int prevnumber() {
        TreeNode* top=prev.top();prev.pop();

        if(top->left){
            // left me ja kar sare left dal do
            pushrightNode(top->left);
        }
        return top->val;
        
    }
     bool hasNext() {
        return !st.empty();
        
    }
    bool hasPrev() {
        return !prev.empty();
        
    }
};
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(root==nullptr)return false;
        BSTIterator it(root);
        int i=it.next();
        int j=it.prevnumber();
        while(i<j &&it.hasNext() && it.hasPrev()){
            if(i+j<k){
                i=it.next();

            }else if(i+j==k){
                return true;
            }
            else{
                j=it.prevnumber();
            }
        }
        return false;

        
    }
};
int main() {

return 0;
}