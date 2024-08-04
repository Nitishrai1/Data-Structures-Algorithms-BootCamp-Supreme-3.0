// Implement circular queue using array


#include<bits/stdc++.h>
using namespace std;
class Circularqueue{

    private:
    int* arr;
    int size;
    int front;
    int rear;
    public:
    Circularqueue(int s){
        this->size=s;
        arr=new int[size];
        front=-1;
        rear=-1;

    }
    void push(int val){
        // isme theen case honge
        // yek case jab overflow ho raha ho
        if(front==0 && rear==size-1){
            cout<<"Overflow condition"<<endl;
            return;
        }
        // jab -1 ho matlab koi element nahi hai
        else if(front==-1 && rear==-1){
            front++;
            rear++;
        }
        // jab circular case ho
        else if(rear==size-1 && front!=0){
            rear=0;
        }
        // jab middle case ho ya noraml case ho
        else{
            rear++;
        }
        arr[rear]=val;

    }
    void pop(){
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
        // isme bhi teen case hoga
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
    Circularqueue q1(6);
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
    q1.pop();
    q1.print();
    q1.pop();
    q1.print();
    q1.pop();
    q1.print();
    // q1.pop();
    // q1.print();
    // q1.pop();
    // q1.print();
    // q1.pop();
    // q1.print();
    // q1.pop();
    // q1.print();
    cout<<q1.getFront()<<endl;
    cout<<q1.getRear()<<endl;
    cout<<q1.getSize()<<endl;


return 0;
}