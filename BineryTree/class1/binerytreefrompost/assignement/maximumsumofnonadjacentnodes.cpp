#include<bits/stdc++.h>
using namespace std;
  //Function to return the maximum sum of non-adjacent nodes.
    pair<int,int> solve(Node* root){
        if(root==NULL)return {0,0};
        // left right se answer le kar ate hai
        auto left=solve(root->left);
        auto right=solve(root->right);
        // include kar lete hai
        int a=root->data+left.second+right.second;
        // exclude kar dete hai
        int b=max(left.first,left.second)+max(right.first,right.second);
        return {a,b};
    }
    int getMaxSum(Node *root) 
    {
      auto pair=solve(root);
      return max(pair.first,pair.second);
      
    }
int main() {

return 0;
}