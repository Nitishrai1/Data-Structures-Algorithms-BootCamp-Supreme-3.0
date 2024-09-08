#include<bits/stdc++.h>
using namespace std;
class BSTIterator {
    stack<TreeNode*> st;
    void pushleftNode(TreeNode* root){
        while(root){
            st.push(root);
            root=root->left;
        }
    }
public:
    BSTIterator(TreeNode* root) {
        pushleftNode(root);
        
    }
    
    int next() {
        TreeNode* top=st.top();st.pop();

        if(top->right){
            // left me ja kar sare left dal do
            pushleftNode(top->right);
        }
        return top->val;
        
    }
    
    bool hasNext() {
        return !st.empty();
        
    }
};
int main() {

return 0;
}