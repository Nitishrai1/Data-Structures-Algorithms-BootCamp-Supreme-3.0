// split the linked list into k group
#include<bits/stdc++.h>
using namespace std;
// int findlength(ListNode* head){
//         ListNode* temp=head;
//         int len=0;
//         while(temp){
//             len++;
//             temp=temp->next;
//         }
//         return len;
//     }
//     // void insert(vector<ListNode*> &ans,int k){
//     //     // k nomber ke pair se insert karna hai

//     // }
//     vector<ListNode*> splitListToParts(ListNode* head, int k) {
//         int len=findlength(head);
//         vector<ListNode*> ans;
//         if(k>len){
//            // agar k len se bada hai to single sinble node dalo or baki empty dal dena
//             ListNode* temp=head;
//             while(temp){
//                 ListNode* next=temp->next;
//                 temp->next=NULL;
//                 ans.push_back(temp);
//                 temp=next;
//             }
//             for(int i=0;i<k-len;i++){
//                 ans.push_back(nullptr);
//             }
        
//         }
//         else{
//             // ab agar len ko k se divede karo agar 0 a gya to k pair me bana do 
//             // nahi to bada vec pahle aeyaga
            
//             //    iska matlab hai ki k ke multiple me store hoga
//             int basesize=len/k;
//             int extranode=len%k;

//             // ab loop cahalo k number of block tak
//             ListNode* temp=head;
//             for(int i=0;i<k;i++){
//                 ListNode* parthead=temp;
//                 ListNode* prev=nullptr;
//                 int currentwindow=basesize+(extranode>0?1:0);
//                 // window add karo
//                 for(int i=0;i<currentwindow;i++){
//                     prev=temp;
//                     temp=temp->next;
//                 }
//                 if(prev!=NULL){
//                     prev->next=nullptr;
//                 }
//                 ans.push_back(parthead);
//                 if(extranode>0){
//                     extranode--; //update kar do
//                 }
//             }
              
            
//                 // pahla list k+1 size ka hoga baki k size ka hoga
                
//         }
//         return ans;
        
//     }
int main() {

return 0;
}