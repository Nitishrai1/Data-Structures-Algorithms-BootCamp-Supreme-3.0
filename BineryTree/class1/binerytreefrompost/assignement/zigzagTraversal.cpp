#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q1;
        vector<vector<int>> ans;
        if(root==nullptr)return {};
        q1.push(root);
        bool flag=true;
        while(!q1.empty()){
            int n=q1.size();
            vector<int> temp;
            
            for(int i=0;i<n;i++){

                TreeNode* front=q1.front();
                int data=front->val;
                temp.push_back(data);
                q1.pop();
                if(front->left){
                    q1.push(front->left);
                }
                if(front->right){
                    q1.push(front->right);
                }
            }
            if(flag){
                ans.push_back(temp);
                flag=false;
            }else{
                reverse(temp.begin(),temp.end());
                ans.push_back(temp);
                flag=true;
            }

            
        }
        return ans;
        
    }
int main() {

return 0;
}