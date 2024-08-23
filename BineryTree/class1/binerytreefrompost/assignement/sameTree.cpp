#include<bits/stdc++.h>
using namespace std;
 bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr && q==nullptr)return true;

        if(p && !q)return false;
        if(!p && q)return false;
        bool status=(p->val==q->val);

        bool left=isSameTree(p->left,q->left);
        bool right=isSameTree(p->right,q->right);
        return left && right && status;
        

        
    }
int main() {

return 0;
}