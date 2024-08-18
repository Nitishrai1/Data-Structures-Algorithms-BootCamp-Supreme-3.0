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
    if(root==nullptr){
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    return max(left,right)+1;

}
int main() {

return 0;
}