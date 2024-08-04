// Implement a doubly ended queue using array
#include<bits/stdc++.h>
using namespace std;
class DoublyEndedQueue
{
private:
    /* data */
    int size;
    int *arr;
    int front;
    int rear;
public:
    DoublyEndedQueue(int s){
        this->size=s;
        front=-1;
        rear=-1;
        arr=new int[size];
    }

    void push_back(int val){
         // isme theen case honge
        // yek case jab overflow ho raha ho
        if(front==0 && rear==size-1 || (rear==front-1)){
            cout<<"Overflow condition"<<endl;
            return;
        }
        // jab -1 ho matlab koi element nahi hai
        else if(front==-1 && rear==-1){
            front=0;
            rear=0;
        }
        // jab circular case ho
        else if(rear==size-1 && front!=0){
            rear=0;
        }
        // jab middle case ho ya noraml case ho
        else if(rear==size-1 && front!=0){
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=val;

    }
    void push_front(int val){
        if(front==0 && rear==size-1 || (rear==front-1)){
            cout<<"Overflow condition";
            return;
        }
        else if(front==-1 && rear==-1){
            rear=front=0;
            

        }
        else if(front==0 && rear!=size-1){
            front=size-1;
        }
        else{
            front--;
        }
        arr[front]=val;

    }
    void pop_back(){
        if(rear==-1 && front==-1){
            cout<<"Underflow condition";
            return;
        }
        if(front==rear){
            arr[rear]=-1;
            front=-1;
            rear=-1;
        }
        else if(rear==0){
            arr[rear]=-1;
            rear=size-1;
        }else{
            arr[rear]=-1;
            rear--;
        }

    }
    void pop_front(){
         if(front==-1 && rear==-1){
            // iska matlab hai ki underflow condtion hai
            cout<<"Underflow condition"<<endl;
            return;
        }
        else if(front==rear){
            // agar dono same position par khade hai tab reset kar do
            arr[front]=-1;
            front=-1;
            rear=-1;

        }
        else if(front==size-1){
            arr[front]=-1;
            front=0;
        }
        else{
            arr[front]=-1;
            front++;
        }

    }
    int getSize(){
        if(front==-1){
            // empty case
            cout<<"Empty";
            return -1;
        }else if(rear>=front){
            return rear-front+1;
        }
        return size-front+rear+1;

    }
    int getFront(){
        if(front==-1){
            cout<<"No element to display";
            return -1;
            
        }else{
            return arr[front];
        }

    }
    int getRear(){
        if(rear==-1){
            cout<<"No element to display";
            return-1;
        }
        return arr[rear];

    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;

    }
   
};


int main() {
    DoublyEndedQueue q1(6);
    q1.push_front(1);
    q1.print();
    q1.push_back(2);
    q1.print();
    q1.push_front(3);
    q1.print();
    q1.push_back(4);
    q1.print();
    q1.push_front(5);
    q1.print();
    q1.push_back(6);
    q1.print();

    q1.push_back(6);
    q1.print();

return 0;
}