// Sort linked list using merge sort
#include<bits/stdc++.h>
using namespace std;
// brute force
//  ListNode* sortList(ListNode* head) {
//         vector<int> v1;
//         ListNode* temp=head;
//         if(temp==NULL) return head;
//         while(temp!=nullptr){
//             v1.push_back(temp->val);
//             temp=temp->next;
//         }
//         sort(v1.begin(),v1.end());
//         temp=head;
//         for(int i=0;i<v1.size();i++){
//             temp->val=v1[i];
//             temp=temp->next;

//         }
//         return head;
        
//     }

// optimal
//    ListNode* findMid(ListNode* head){
//         ListNode* slow=head;
//         ListNode* fast=head;
//         ListNode* prev=nullptr;
//         while(fast && fast->next){
//             prev=slow;
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         if(prev!=NULL){
//             prev->next=nullptr;
//         }
//         return slow;
//     }
//     ListNode* merge(ListNode* list1, ListNode* list2) {
//         if (list1 == NULL) return list2;
//     if (list2 == NULL) return list1;

//     ListNode dummy(0); //dummy node banao
//     ListNode* curr = &dummy;
//     while (list1 != NULL && list2 != NULL) {
//         if (list1->val < list2->val) {
//             curr->next = list1;
//             list1 = list1->next;
//         } else {
//             curr->next = list2;
//             list2 = list2->next;
//         }
//         curr = curr->next;
//     }
// // bacah hua jodo
//     if (list1 != NULL) {
//         curr->next = list1;
//     } else {
//         curr->next = list2;
//     }

//     return dummy.next;
//     }
//     ListNode* sortList(ListNode* head) {
//         if(head==NULL || head->next==NULL){
//             return head;
//         }
//         // break karo 
//         ListNode* mid=findMid(head);
//         ListNode* left=head;
//         ListNode* right=mid;
        
    
//     // recursive call karo jab tak single element na bache
//         left=sortList(left);
//         right=sortList(right);

//         // merge kar do
//         ListNode* ans= merge(left,right);
//         return ans;
        
//     }

int main() {

return 0;
}