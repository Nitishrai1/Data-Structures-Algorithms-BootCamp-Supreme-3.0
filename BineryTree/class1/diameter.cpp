// wap to fid the diameter of the tree
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
int height(Node* root){
        if(root==NULL){
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        return max(left,right)+1;
    }
    int diameterOfBinaryTree(Node* root) {

        if(root==NULL){
            return 0;
        }
        int left=diameterOfBinaryTree(root->left);
        int right=diameterOfBinaryTree(root->right);
        int option3=height(root->left)+height(root->right);
        return max(left,max(right,option3));

        
    }
int main() {
    // code to find the diameter of the binery tree   f

return 0;
}