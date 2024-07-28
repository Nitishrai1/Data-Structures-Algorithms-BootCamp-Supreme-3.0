// Add two number in a linked list
#include<bits/stdc++.h>
using namespace std;
//  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode* temp1=l1;
//         ListNode* temp2=l2;
//         ListNode* res=nullptr;
//         ListNode* curr=nullptr;
//         int carry=0;
//         while(temp1 || temp2){
//             int d1=(temp1!=NULL)?temp1->val:0;
//             int d2=(temp2!=NULL)?temp2->val:0;
//             int sum=d1+d2+carry;
//             carry=sum/10;
//             if(res==NULL){
//                 res=new ListNode(sum%10);
//                 curr=res;   
//             }
//             else{
//                 curr->next=new ListNode(sum%10);
//                 curr=curr->next;
//             }
//             if(temp1){
//                 temp1=temp1->next;

//             }
//             if(temp2){
//                 temp2=temp2->next;
                
//             }



//         }
//         if(carry){
//             curr->next=new ListNode(carry);
//             curr=curr->next;

//         }
//         return res;
//  }
// ListNode* addTwoNumbersrr(ListNode* l1, ListNode* l2,int carry){
//         if(!l1 && !l2 && !carry ){
//             return 0;
//         }
//         int a=l1?l1->val:0;
//         int b=l2?l2->val:0;
//         int sum=a+b+carry;
//         int digit=sum%10;
//         carry=sum/10;

//         ListNode* newnode=new ListNode(digit);
//         newnode->next=addTwoNumbersrr(l1?l1->next:0 , l2?l2->next:0,carry);
//         return newnode;


//     }
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode* res=addTwoNumbersrr(l1,l2,0);
//         return res;
//     }
int main() {

return 0;
}