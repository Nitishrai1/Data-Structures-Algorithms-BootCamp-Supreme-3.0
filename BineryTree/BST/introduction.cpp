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
void levelordertraversal(Node* root){
    queue<Node*> q1;
    q1.push(root);
    q1.push(NULL);
    while(!q1.empty()){
        // int n=q1.size();
        // for(int i=0;i<n;i++){
        //     Node* front=q1.front();q1.pop();
        //     cout<<front->data<<" ";
        //     if(front->left){
        //         q1.push(front->left);
        //     }
        //     if(front->right){
        //         q1.push(front->right);
        //     }
        // }
        Node* front=q1.front();
        q1.pop();
        if(front==NULL){
            cout<<endl; //yek level khatam ho gya hai
            if(!q1.empty()){
                q1.push(NULL);
            }
        }else{
            cout<<front->data<<" ";
            if(front->left){
                q1.push(front->left);
            }
            if(front->right){
                q1.push(front->right);
            }
        }
    }
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
// function to delete in the bst
void deletionintobst(Node* root,int target){
    if(root==nullptr)return;
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
    cout<<"Inorder ";inorder(root);cout<<endl;
    cout<<"PreOrder ";preorder(root);cout<<endl;
    cout<<"PostOrder ";postorder(root);cout<<endl;
    cout<<"LevelorderTraversal ";levelordertraversal(root);
    if(find(root,0)){
        cout<<"Found";
    }else{
        cout<<"Not found";
    }


return 0;
}