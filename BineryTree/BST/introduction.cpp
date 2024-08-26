// construct a bst ans perform difreent operation on it
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }

};
Node* createBST(Node* root,int data){
    if(root==nullptr){
        Node* newnode=new Node(data);
        return newnode;
    }
    if(data>root->data){
        root->right=createBST(root->right,data);
    }else{
        root->left=createBST(root->left,data);
    }
    return root;

}
void inorder(Node* root){
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    

}
void preorder(Node* root){
    if(root==NULL)return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    

}
void postorder(Node* root){
    if(root==NULL)return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    

}
bool find(Node* root,int data){
    if(root==NULL)return false;
    if(root->data==data)return true;
    if(data>root->data){
        return find(root->right,data);
    }else{
        return find(root->right,data);
    }

}
int main() {

    Node* root=NULL;
    int data;
    while(true){
        cin>>data;
        if(data==-1){
            break;
        }
        root=createBST(root,data);
    }
    inorder(root);


return 0;
}