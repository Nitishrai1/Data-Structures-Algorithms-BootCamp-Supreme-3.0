#include<bits/stdc++.h>
using namespace std;
 void solve(Node* root,vector<int>& inorder){
        if(root==NULL)return;
        solve(root->left,inorder);
        inorder.push_back(root->data);
        solve(root->right,inorder);
    }
    int countPairs(Node* root1, Node* root2, int x)
    {
        vector<int> inorder1;
        solve(root1,inorder1);
        vector<int> inorder2;
        solve(root2,inorder2);
        // ab yek array me tarvers karo or dusare array me search karo
        int cnt=0;
        for(int i=0;i<inorder1.size();i++){
            bool found=binary_search(inorder2.begin(),inorder2.end(),x-inorder1[i]);
            if(found){
                cnt++;
            }
        }
        return cnt;
 
    }
int main() {

return 0;
}