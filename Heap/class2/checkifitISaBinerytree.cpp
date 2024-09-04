#include<bits/stdc++.h>
using namespace std;
// Approch one har node ko count kar lo with its number or agar koi node missing hoga jo ki total sum se nikal jayega return false else return true
bool isCompleteTree(TreeNode* root) {
        // another approch sabko numbering kar do or last me check kar kya sare node hai 1-n nahi to return false kar dena
        // par is approch me long long lena
        queue<pair<TreeNode*,int>> q1;
        q1.push({root,1});
        vector<long long> ans;
        while(!q1.empty()){
            int n=q1.size();
            
            for(int i=0;i<n;i++)
            {
                pair<TreeNode*,int> front=q1.front();
                q1.pop();
                TreeNode* node=front.first;
                long long dist=front.second;
                if(node->left){
                    q1.push(make_pair(node->left,dist*2));
                }
                if(node->right){
                    q1.push(make_pair(node->right,dist*2+1));
                }
                ans.push_back(dist);
            }
        }
        for(auto& it:ans){
            cout<<it<<" ";
        }
        int size=ans.size()+1;
        // check kar lo ki nahi missing nahi hai na koi number
        long long sum1=size*(size-1)/2;
        long long totalsum=accumulate(ans.begin(),ans.end(),0);
        return sum1==totalsum;
        
    }
    // optimal har node ko check kar lo ki uske pahle koi null to nahi na aya tha
      bool isCompleteTree(TreeNode* root) {

        queue<TreeNode*> q1;
        q1.push(root);
        bool flag=false;
        while(!q1.empty()){
            TreeNode* front=q1.front();q1.pop();
            if(front==NULL){
                flag=true;
            }else{
                if(flag==true)return false;
                q1.push(front->left);
                q1.push(front->right);
            }
            
            
        }
        return true;
        
    }
int main() {

return 0;
}