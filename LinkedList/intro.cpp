// Creation of linkedList
#include<bits/stdc++.h>
using namespace std;
class SinglyLinkedList{
    public:
        SinglyLinkedList* next;
        int data;
        SinglyLinkedList(){
            this->next=nullptr;
        }
    SinglyLinkedList(int val){
        this->next=nullptr;
        this->data=val;
    }
    
    

};
void CreatSingleLL(SinglyLinkedList* &head,int data){
    SinglyLinkedList* newnode=new SinglyLinkedList(data);
    SinglyLinkedList* temp=head;
    if(head==nullptr){
        head=newnode;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }

}
void printLL(SinglyLinkedList* head){
        SinglyLinkedList* temp=head;
        if(head==NULL){
            cout<<"Linked list is empty";
        }
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }cout<<"NUll";
}
void InsertAtHead(SinglyLinkedList* &head,int data){
    
    SinglyLinkedList* newnode=new SinglyLinkedList(data);
    if(head==NULL){
        head=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }

}
void InsertAtTail(SinglyLinkedList* &head,int data ){
    SinglyLinkedList* newnode=new SinglyLinkedList(data);
    if(head==NULL){
        head=newnode;
    }
    else{
        SinglyLinkedList* temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
            /* code */
        }
        temp->next=newnode;
        
    }

}
void InsertAtMiddle(SinglyLinkedList* &head ,int pos,int data){
    SinglyLinkedList* newnode=new SinglyLinkedList(data);
    if(pos==1){
        newnode->next=head;
        head=newnode;
    }
    else{
        SinglyLinkedList* temp=head;
        for(int i=0;i<pos-1 &&  temp!=NULL;i++){
            temp=temp->next;
        }
        if(temp==NULL){
            cout<<"Postion out of range";
        }
        else{
            newnode->next=temp->next;
            temp->next=newnode;
        }
    }


}
void DeletionInSinglyLinkedList(SinglyLinkedList* &head,int pos){
    if(head==NULL){
        cout<<"Linked list is empty";
        return;
    }
    if(pos==1){
        SinglyLinkedList* temp=head;
        head=head->next;
        delete temp;
    }
    else{
        SinglyLinkedList* temp=head;
        for(int i=1;i<pos-1 && temp!=NULL;i++){
            temp=temp->next;
        }
        if(temp==NULL || temp->next==NULL){
            cout<<"No node to delete";
        }
        
    
        // in the middle
        else{
            SinglyLinkedList* todelete=temp->next;
            temp->next=todelete->next;
            delete todelete;
        }


    }
}
int main() {
    int n;cout<<"Enter the number of node: ";cin>>n;
     SinglyLinkedList* head=nullptr;
     
    while(n--){
        int data;cin>>data;
        CreatSingleLL(head,data);
        
    }
    cout<<"Original ll is:";
    printLL(head);
    cout<<endl;
    cout<<"Insert 70 to the head of ll";
    InsertAtHead(head,70);
    cout<<endl;
    cout<<"Printing after insertiion";
    printLL(head);
    cout<<endl;
    cout<<"Inserting 60 at position 2";
    InsertAtMiddle(head,2,60);
    cout<<endl;
    cout<<"Printing after insertiion in middle";
    printLL(head);
    cout<<endl;
    cout<<"INserting 100 at end of ll: ";
    InsertAtTail(head,100);
    cout<<endl;
    cout<<"Printing after insertiion in tail";
    printLL(head);
    cout<<endl;
    // cout<<"Deleting the head node";
    // DeletionInSinglyLinkedList(head,1);
    // cout<<"\n"<<"Printing after deleting the head node";
    // printLL(head);
    // cout<<"Deleting the middile node";
    // DeletionInSinglyLinkedList(head,3);
    // cout<<"\n"<<"Printing after deleting the middle node";
    // printLL(head);
    cout<<"Deleting the last node";
    DeletionInSinglyLinkedList(head,8);
    cout<<"\n"<<"Printing after deleting the last node";
    printLL(head);


    
    
   


return 0;
}