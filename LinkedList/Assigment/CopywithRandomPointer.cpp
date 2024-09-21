#include<bits/stdc++.h>
using namespace std;
Node *copyList(Node *head) {
        // Write your code here
        
        unordered_map<Node*,Node*> nodemap;
        Node* temp=head;
        while(temp){
            nodemap[temp]=new Node(temp->data); //clone kar diya hamne
            temp=temp->next;
        }
        temp=head;
        while(temp){
            nodemap[temp]->next=nodemap[temp->next];
            nodemap[temp]->random=nodemap[temp->random];
            temp=temp->next;
        }
        return nodemap[head];
    }
int main() {

return 0;
}