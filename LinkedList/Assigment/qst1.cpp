// Delete n nodes after m nodes
#include<bits/stdc++.h>
using namespace std;
// void linkdelete(struct Node **head, int n, int m) {
//         // Add code here
//         // par m-1 ke step ke baad n nodes delete karn hai
//         struct Node* temp=*head;
//         if(temp==NULL)return ;
//         while(temp!=NULL){
//             // m-1 step chalo 
//             int pos=m-1;
//             while(pos-- && temp!=NULL){
//                 temp=temp->next;
//             }
//             // ab check kar lo pahle kahi null to nahi hai na
//             if(temp==NULL || temp->next==NULL)break;
//             // nahi hai to n nodes delete kar do waha se
//             int pos2=n;
//             struct Node* todelete=temp->next; //yaha se n node delete karna hia
//             while(pos2-- && todelete!=NULL){
//                 // next node nikalo or previous delete kar do
//                 struct Node* newnode=todelete->next;
//                 delete todelete;
//                 todelete=newnode;
//             }
//             // ab remaing ko zod do
//             temp->next=todelete;
//             temp=todelete;  //temp ko update kar do
            
//         }
//     }
int main() {

return 0;
}