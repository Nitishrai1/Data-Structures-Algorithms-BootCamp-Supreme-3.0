#include<bits/stdc++.h>
using namespace std;
    Node* findIntersection(Node* head1, Node* head2) {
        // code goes here.
        Node* temp1=head1;
        unordered_map<int,int> mp;
        while(temp1){
            int data=temp1->data;
            mp[data]++;
            temp1=temp1->next;
        }
        Node* ans=new Node(0);
        Node* curr=ans;
        Node* temp2=head2;
        while(temp2){
            if(mp[temp2->data]==1){
                curr->next=new Node(temp2->data);
                curr=curr->next;
            }
            temp2=temp2->next;
            
        }
        return ans->next;
    }
int main() {

return 0;
}