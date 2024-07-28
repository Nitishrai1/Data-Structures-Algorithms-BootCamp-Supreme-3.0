// Add 1 to number represented as linked list
#include<bits/stdc++.h>
using namespace std;

class  Node{
    public :
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};
void solve(Node* head,int &carry){
    if(head==nullptr)return;
    solve(head->next,carry);
    int sum=carry+head->data; //tail recursion jab null se wapas ja rahe tab update ho raha hai
    int digit=sum%10;
    carry=sum/10;
    head->data=digit;
}
void print(Node* head){
    while(head){
        cout<<head->data<<"->";
        head=head->next;
    }cout<<"NULL";
}
Node* add1(Node* &head,int &carry){
    solve(head,carry);
    if(carry){
        Node* newnode=new Node(carry);
        newnode->next=head;
        head=newnode;
    }
    return head;
}
int main() {
    Node* head=new Node(9);
    head->next=new Node(9);
    head->next->next=new Node(9);
    int carry=1;
    head=add1(head,carry);
    print(head);


return 0;
}