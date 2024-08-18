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
void levelOrderTraversal(Node* root){
    queue<Node*> q1;
    if(root==nullptr)cout<<"NULL";
    q1.push(root);
    while(!q1.empty()){
        int n=q1.size();
        for(int i=0;i<n;i++){
            Node* front=q1.front();
            q1.pop();
            cout<<front->data<<" ";
            if(front->left){
                q1.push(front->left);
            }
            if(front->right){
                q1.push(front->right);
            }
        }cout<<endl;
    }
}
int main() {
    Node* root;
    root=createTree();
    levelOrderTraversal(root);

return 0;
} 