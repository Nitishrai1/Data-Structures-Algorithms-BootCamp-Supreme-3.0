#include<bits/stdc++.h>
using namespace std;
 vector<int> inOrder(Node* root)
    {
        //code here
        vector<int> ans;
        Node* curr=root;
        while(curr){
            // left null hai to vvist karo or right chale jao
            if(curr->left==NULL){
                ans.push_back(curr->data);
                curr=curr->right;
            }else{
                // left id not null
                // find inorder predessecor
                Node* pred=curr->left;
                while(pred->right!=curr && pred->right){
                    pred=pred->right;
                }
                // if right is null then go left after connecting link from predessor to current
                
                if(pred->right==NULL){
                    pred->right=curr;
                    curr=curr->left;
                }
                else{
                    // left visit ho chuka hai go right after visiting the current node
                    pred->right=nullptr;
                    ans.push_back(curr->data);
                    curr=curr->right;
                }
            }
        }
        return ans;
    }
int main() {

return 0;
}