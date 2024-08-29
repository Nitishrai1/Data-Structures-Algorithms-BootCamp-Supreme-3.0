#include<bits/stdc++.h>
using namespace std;
 void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        Node* temp=root;
        suc=NULL;
        pre=NULL;
        while(temp){
            if(temp->key>key){
                suc=temp;
                temp=temp->left;
            }else{
                temp=temp->right;
            }
        }
        temp=root;
        while(temp){
            if(temp->key<key){
                pre=temp;
                temp=temp->right;
            }else{
                temp=temp->left;
            }
        }
    }
int main() {

return 0;
}