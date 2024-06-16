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
        this->data-val;
    }
    
    

};
void printLL(SinglyLinkedList* head){
        SinglyLinkedList* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
}
int main() {
    int n;cout<<"Enter the number of node: ";cin>>n;
     SinglyLinkedList* head=new SinglyLinkedList(10);
     SinglyLinkedList* temp=head;
    while(n--){
        int data;cin>>data;
        temp->next=new SinglyLinkedList(data);
        temp=temp->next;
        
    }
    printLL(head);
    
   


return 0;
}