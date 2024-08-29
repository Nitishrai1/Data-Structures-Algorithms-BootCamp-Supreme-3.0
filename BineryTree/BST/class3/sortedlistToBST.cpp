#include<bits/stdc++.h>
using namespace std;
TreeNode* sortedListToBST(ListNode* head) {
        if(head==NULL)return nullptr;
        // yek case tab jab head single node hoi
        if(head->next==nullptr){
            TreeNode* root=new TreeNode(head->val);
            return root;
        }

        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=NULL;
        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }

        TreeNode* root=new TreeNode(slow->val);
        prev->next=NULL;
        root->left=sortedListToBST(head);
        root->right=sortedListToBST(slow->next);
        return root;
        
    }
int main() {

return 0;
}