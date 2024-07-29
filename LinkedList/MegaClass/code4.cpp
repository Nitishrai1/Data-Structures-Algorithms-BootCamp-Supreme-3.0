// flattern a linked list leetcode
#include<bits/stdc++.h>
using namespace std;
// Node* solve(Node* head){
//         if(head==nullptr)return nullptr;
//         auto it=head;
//         auto tail=it; //tail node ka trak rakho
//         while(it){
//             if(it->child){
//                 auto childTail=solve(it->child); //yaha par tail node return hua hai
//                 auto temp=it->next; 
//                 it->next=it->child;
//                 it->next->prev=it;
//                 childTail->next=temp;
//                 if(temp!=NULL){

//                     temp->prev=childTail;
//                 }
//                 it->child=nullptr;
//             }
//             tail=it;
//             it=it->next;
//         }
//         return tail;
//     }
//     Node* flatten(Node* head) {
//          solve(head);
//          return head;
        
//     }
int main() {

return 0;
}