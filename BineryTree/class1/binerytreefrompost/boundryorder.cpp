#include<bits/stdc++.h>
using namespace std;
 void leftboundry(Node* root,vector<int>& ans){
        if(root==nullptr){
            return;
        }
        // leaf node nahi hona chaiye
        if(root->left==NULL && root->right==NULL){
            // yani ye leaf node haio
            return;
        }
        ans.push_back(root->data);
        if(root->left!=NULL){
            leftboundry(root->left,ans);
        }else{
            leftboundry(root->right,ans);
        }
        
        
    }
    void leafboundry(Node* root,vector<int>& ans){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->data);
            return;
        }
        leafboundry(root->left,ans);
        leafboundry(root->right,ans);
        
        
    }
    void reverseRightboundry(Node* root,vector<int>& ans){
        if(root==NULL){
            return;
        }
        if(root->left==nullptr && root->right==nullptr){
            // yani ye bhi yek leaf node hai
            return;
        }
        if(root->right!=NULL){
            reverseRightboundry(root->right,ans);
        }else{
            reverseRightboundry(root->left,ans);
        }
        ans.push_back(root->data);
        
        
    }
    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        if(root==nullptr)return ans;
        // 5 step me divide hoga
        // part A
        // sabse pahle root ke element ko process kar lo
        ans.push_back(root->data);
        // part B
        // left side node ke liye call kar do
        leftboundry(root->left,ans);
        // part C
        // left subtree me leaf boundry ko karo
        leafboundry(root->left,ans);
        
        
        // part D
        // right subtree me leaf boundry ko karo store
        leafboundry(root->right,ans);
        
        // part E
        // right boundry ko reverse kar ke store karo
        reverseRightboundry(root->right,ans);
        return ans;
        
        
    }
int main() {

return 0;
}