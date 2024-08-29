#include<bits/stdc++.h>
using namespace std;
 Node * inOrderSuccessor(Node *root, Node *x)
    {
        // binery search laga dete hai
        Node* ans=NULL;
        while(root!=NULL){
            if(root->data>x->data){
                ans=root;
                root=root->left;
            }else{
                root=root->right;
                
            }
        }
        return ans;
    }
int main() {

return 0;
}