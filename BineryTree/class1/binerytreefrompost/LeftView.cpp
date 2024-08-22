#include<bits/stdc++.h>
using namespace std;
void solve(queue<Node*>& q1,Node* root,vector<int>& ans){
    // level order traversal se ho jayega
    while(!q1.empty()){
        int n=q1.size();
        vector<int> temp;
        for(int i=0;i<n;i++){
           Node* front=q1.front();
           int ele=front->data;
           temp.push_back(ele);
           q1.pop();
           if(front->left){
               q1.push(front->left);
           }
           if(front->right){
               q1.push(front->right);
           }
        }
        // temp ka sabse pahal element dal lete hai ans vector me
        ans.push_back(temp.front());
    }
    
    
}
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
   queue<Node*> q1;
   q1.push(root);
   if(q1.empty())return ans;
   solve(q1,root,ans);
   return ans;
}
int main() {

return 0;
}