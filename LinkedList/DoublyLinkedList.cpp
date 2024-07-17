// create a doubly linked list
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
void createDLL(Node* &head,int data){
    if(head==nullptr){
        Node* newnode=new Node(data);
        head=newnode;
    }else{
        Node* temp=head;
        while (temp->next!=NULL)
        {
            /* code */
            temp=temp->next;
        }
            Node* newnode=new Node(data);
            temp->next=newnode;
            newnode->prev=temp;
        
        

    }
}
int length(Node* head){
    int cnt=0;
    Node* temp=head;
    while (temp)
    {
        cnt++;
        temp=temp->next;
        /* code */
    }
    return cnt;
    

}
void printdoublyll(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
        /* code */

    }cout<<"Null"<<endl;
    

}
void insertatHead(Node* &head,int data){
    
    Node* newnode=new Node(data);
    newnode->next=head;
    newnode->prev=NULL;
    if(head!=NULL){
        head->prev=newnode;
    }
    head=newnode;


}
void insertatTail(Node* &head,int data){
    Node* newnode=new Node(data);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next=nullptr;

}
void insertion(Node* &head,int data,int pos){
    if(pos==0){
        // insert at head;
        insertatHead(head,data);

    }
    else if(pos==length(head)){
        // insertattail
        insertatTail(head,data);
    }
    else if(pos>0 && pos<length(head)){
        // insert at middle
        Node* temp=head;

        for(int i=1;i<pos-1;i++){
            temp=temp->next;

        }
        // temp
        Node* newnode=new Node(data);
        newnode->next=temp->next;
        temp->next->prev=newnode;
        temp->next=newnode;
        newnode->prev=temp;

    }
    else{
        cout<<"Invalid position to insert the data";
    }


}
void Deletion(Node* &head,int pos){

}
int main() {
    Node* head=NULL;
    int n;cin>>n;
    cout<<"Enter the node data";
    while(n--){
        int data;cin>>data;
        createDLL(head,data);

    }
    Node* temp=head;
    cout<<"Linked list before inserting the data: ";
    printdoublyll(temp);
    // /length
    int len=length(temp);
    cout<<"The length of the linked list is: "<<len<<endl;
    // inserting the elmenet at the head of the linked list
    int data;cout<<"\nEnter the data to insert: ";cin>>data;
    // insertatHead(temp,data);
    // cout<<"\nThe linked list after inserting the data at head is : ";
    // insertatTail(head,data);
    int pos;cout<<"Enter the postion: ";cin>>pos;
    insertion(temp,data,pos);
    cout<<"Linked list after inserting  is : ";
    printdoublyll(temp);


return 0;
}