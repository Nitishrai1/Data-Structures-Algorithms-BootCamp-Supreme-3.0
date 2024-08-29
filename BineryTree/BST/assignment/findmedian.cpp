#include<bits/stdc++.h>
using namespace std;
void solve(Node* root,vector<int>& inorder){
    if(root==NULL)return;
    solve(root->left,inorder);
    inorder.push_back(root->data);
    solve(root->right,inorder);
    
}

float findMedian(struct Node *root)
{
    //   pattern ye hai ki agar node  odd number hai to root ko return kar do
    // warna left me maxnikal kar lao
    // root me add kar ke /2 kar do
    vector<int> inorder;
    solve(root,inorder);
    int size=inorder.size();
    if(size%2){
        // mid return kar do
        return inorder[size/2];
    }
    int mid=size/2;
    float sum=(float)(inorder[mid]+inorder[mid-1])/2;
    return sum;
}
int main() {

return 0;
}