// implemeting a queue using array from scratch
#include<bits/stdc++.h>
using namespace std;
class Queue{
    private:
    int size;
    int * arr;
    int front;
    int rear;
    public:
    Queue(int s){
        this->size=s;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

void push(int val) {
    if (rear == size - 1) {
        cout << "Overflow" << endl;
        return;
    } else if (front == -1) {
        
        front = 0;
        rear = 0;
    } else {
        rear++;
    }
    arr[rear] = val;
}

    void pop(){
        // empty case
        if(front==-1 || front > rear){
            cout<<"Underflow"<<endl;
            return;
        }
        else if(front==rear){
            arr[front]=-1;
            front=-1;  //iska matlab hai yek hi element hai
            rear=-1;
        }else{
            arr[front]=-1;
            front++;
        }
        

    }
    int getsize(){
        if(front==-1 && rear==-1){
            return 0;
        }
        return rear-front+1;
        

    }
    int getfront(){
        if(front==-1){
            // iska matlab hai no elemtn
            cout<<"No element";
            return -1;
        }else{
            return arr[front];
        }

    }
    int getrear(){
        if(rear==-1){
            cout<<"No element";
            return -1;
        }
        else if(rear==size-1){
            cout<<"Last element";
            return arr[rear-1];
        }else{
            return arr[rear];
        }

    }
    bool isEmpty(){
        if(front==-1 && rear==-1){
            return true;
        }
        return false;

    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};

int main() {
    Queue q1(6);
    q1.push(1);
    q1.print();
    q1.push(2);
    q1.print();
    q1.push(3);
    q1.print();
    q1.push(4);
    q1.print();
    q1.push(5);
    q1.print();
    q1.push(6);
    q1.print();
    q1.push(8);
    // q1.pop();
    // q1.print();
    // q1.pop();
    // q1.print();
    // q1.pop();
    // q1.print();
    // q1.pop();
    // q1.print();
    // q1.pop();
    // q1.print();
    // q1.pop();
    q1.print();
   cout<<q1.getsize()<<endl;
   cout<<q1.getrear()<<endl;
   cout<<q1.isEmpty()<<endl;
   cout<<q1.getfront()<<endl;





    




return 0;
}