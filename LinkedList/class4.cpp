// Wap to detect a cycle in linked list
#include<bits/stdc++.h>
using namespace std;
   bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        if(head==NULL) return false;
        if(slow->next==NULL) return false;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
            
        }
        return false;
    }
    // also can be done using the map
     
int main() {

return 0;
}