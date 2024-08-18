// create a binery tree using calss
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        this->data=val;
        left=NULL;
        right=NULL;
    }
};

Node* createTree(){
    cout<<"Enter the value for node ";
    int data;
    cin>>data;
    if(data==-1){
        return nullptr;
    }
    else{
        Node* root=new Node(data);
        cout<<"Addting left child for "<<data<<endl;
        root->left=createTree(); //adding the left child to the root
        cout<<"Addting right child for "<<data<<endl;
        root->right=createTree(); //adding the right child to the root 
        return root;

    }
}

void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);

}
void postorder(Node* root){
    if(root==NULL){
        return;
    }
    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<endl;

}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    preorder(root->left);
    cout<<root->data<<endl;
    preorder(root->right);

}
int main() {
    Node* root;
    root=createTree();
   cout<<"Printing root "<<root->data<<endl; 
   preorder(root);

return 0;
}