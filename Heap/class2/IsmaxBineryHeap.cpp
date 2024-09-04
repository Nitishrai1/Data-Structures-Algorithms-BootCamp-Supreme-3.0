#include<bits/stdc++.h>
using namespace std;
 bool isCompleteTree(Node* root) {
        // another approch sabko numbering kar do or last me check kar kya sare node hai 1-n nahi to return false kar dena
        queue<pair<Node*,int>> q1;
        q1.push({root,1});
        vector<long long> ans;
        while(!q1.empty()){
            int n=q1.size();
            
            for(int i=0;i<n;i++)
            {
                pair<Node*,int> front=q1.front();
                q1.pop();
                Node* node=front.first;
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
        
        int size=ans.size()+1;
        // check kar lo ki nahi missing nahi hai na koi number
        long long sum1=size*(size-1)/2;
        long long totalsum=accumulate(ans.begin(),ans.end(),0);
        return sum1==totalsum;
      }
      bool maxproperty(Node* root){
          if(root==nullptr)return true;
          if(root->left==NULL && root->right==NULL)return true;
          
          bool leftans=maxproperty(root->left);
          bool rightans=maxproperty(root->right);
          
          bool option1=true;
          if(root->left && root->data <root->left->data){
              option1=false;
          }
          bool option2=true;
           if(root->right && root->data <root->right->data){
              option2=false;
          }
          bool currentans=option1 && option2;
          if(currentans && leftans && rightans){
              return true;
          }else{
              return false;
          }
      }
    bool isHeap(struct Node* tree) {
        // code here
        bool checkcompletness=isCompleteTree(tree);
        bool maxcheck=maxproperty(tree);
        if(checkcompletness && maxcheck ){
            return true;
        }else{
            return false;
        }
        // ye logic nahi chal raha kiu ki complete binery trww bhi check karna hai
        // uske liye pahle check kar loki binery tree hai ki nahi
 
    }
int main() {

return 0;
}