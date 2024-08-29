#include<bits/stdc++.h>
using namespace std;
  void solve(Node* root,Node* &head,Node* &tail){
        if(root==NULL)return;
        solve(root->left,head,tail);
        // agar tail null nahi hai root->right ko tqail kar do
       if(tail!=NULL){
        //   ye wo hai jaha tak ll ban chuki hai
           tail->right=root;
           root->left=tail;
           tail=root;
       }else{
        //   ye pahle node bana ne ke liye hai
           head=root;
           tail=root;
       }
       solve(root->right,head,tail);
    }
    Node* bToDLL(Node* root) {
        Node* head=NULL;
        Node* tail=NULL;
        solve(root,head,tail);
        return head;
    }
int main() {

return 0;
}