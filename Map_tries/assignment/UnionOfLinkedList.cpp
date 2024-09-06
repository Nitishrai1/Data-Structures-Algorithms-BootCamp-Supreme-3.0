#include<bits/stdc++.h>
using namespace std;
 struct Node* makeUnion(struct Node* head1, struct Node* head2) {
        // yek karm karte hai sorted linked list ke liye acha hoga ki orderedd mao use kare le
        map<int,int> mp;
        Node* temp1=head1;
        while(temp1){
            int data=temp1->data;
            mp[data]=1;
            temp1=temp1->next;
        }
        Node* temp2=head2;
        while(temp2){
            int data=temp2->data;
            mp[data]=1;
            temp2=temp2->next;
        }
        Node* ans=new Node(0);
        Node* curr=ans;
        for(auto& node:mp){
            curr->next=new Node(node.first);
            
            curr=curr->next;
        }
        return ans->next;
        
        
    }
int main() {

return 0;
}