// WAP to find the intersection of two linked list
#include<bits/stdc++.h>
using namespace std;
Node* intersection(Node* head1,Node* head2)
{
    // navie approch
    Node* temp1=had1,temp2=head2;
    while(temp1!=temp2){
        temp1=temp1->next;
        temp2=temp2->next;
        if(temp1==temp2){
            return temp1;
        }
        if(temp1==NULL)temp1=head2;
        if(temp2==NULL) temp2=head1;
    }
    return temp1; //this is for when thier is only one linked list
}
int main() {

return 0;
}