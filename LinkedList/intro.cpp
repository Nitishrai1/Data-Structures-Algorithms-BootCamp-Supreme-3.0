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
void AddTowLinkedList(SinglyLinkedList* head1,SinglyLinkedList* head2){
    if(head1==nullptr) printLL(head2);
    if(head2==nullptr) printLL(head1);
    int carry=0;
    SinglyLinkedList* temp1=head1;
    SinglyLinkedList* temp2=head2;
    SinglyLinkedList* result=nullptr;
    SinglyLinkedList* prev=nullptr;
    while(temp1!=nullptr || temp2!=nullptr){
        int sum=carry;
        if(temp1){
            sum+=temp1->data;
            temp1=temp1->next;
        }
        if(temp2){
            sum+=temp1->data;
            temp1=temp1->next;
        }
        sum=sum%10;
        carry=sum/10;
        SinglyLinkedList* temp=new SinglyLinkedList(sum);
        if(result==nullptr){
            result=temp;
            prev->next=result;
        }
        else{
            prev->next=temp;
            prev=temp;
        }

    }
    if(carry){
        SinglyLinkedList* newnode=new SinglyLinkedList(carry);
        prev->next=newnode;
        
        
    }
    printLL(result);
}
int main() {
    int n;cout<<"Enter the number of node: ";cin>>n;
     SinglyLinkedList* head1=nullptr;
     SinglyLinkedList* head2=nullptr;
     
    while(n--){
        int data;cin>>data;
        CreatSingleLL(head1,data);
        
    }
    cout<<"\nenter the data of 2 ll: ";
    int m;cin>>m;
    while(m--){
        int data;cin>>data;
        CreatSingleLL(head2,data);
        
    }
    // cout<<"Original ll is:";
    // printLL(head);
    // cout<<endl;
    // cout<<"Insert 70 to the head of ll";
    // InsertAtHead(head,70);
    // cout<<endl;
    // cout<<"Printing after insertiion";
    // printLL(head);
    // cout<<endl;
    // cout<<"Inserting 60 at position 2";
    // InsertAtMiddle(head,2,60);
    // cout<<endl;
    // cout<<"Printing after insertiion in middle";
    // printLL(head);
    // cout<<endl;
    // cout<<"INserting 100 at end of ll: ";
    // InsertAtTail(head,100);
    // cout<<endl;
    // cout<<"Printing after insertiion in tail";
    // printLL(head);
    // cout<<endl;
    // cout<<"Deleting the head node";
    // DeletionInSinglyLinkedList(head,1);
    // cout<<"\n"<<"Printing after deleting the head node";
    // printLL(head);
    // cout<<"Deleting the middile node";
    // DeletionInSinglyLinkedList(head,3);
    // cout<<"\n"<<"Printing after deleting the middle node";
    // printLL(head);
    // cout<<"Deleting the last node";
    // DeletionInSinglyLinkedList(head,8);
    // cout<<"\n"<<"Printing after deleting the last node";
    // printLL(head);
    AddTowLinkedList(head1,head2);
    




    
    
   


return 0;
}