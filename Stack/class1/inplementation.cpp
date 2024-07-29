// implement a stack using array in cpp

#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int *arr;
    int size=-1;
    int top;
    Stack(int size){
        this->size=size;
        arr=new int[this->size];
        this->top=-1;
        
    }

    void push(int data){
        if(top==size-1){ //isme bass overflow case sambhalna hota hai
            cout<<"Stack Overflow";
        }else{
            top++;
            arr[top]=data;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"Stack Underflow";  //is case me koi element pop karne ke liye nahi hai
        }
    }
    int getSize(){
        return top+1;
    }
    int gettop(){
        if(top==-1){
            cout<<"No element";
        }else{
            return arr[top];
        }

    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;

    }
    void print(){
        int index=top;
        if(index==-1){
            cout<<"No element";
        }
        else{
            while(index>=0){
            cout<<arr[index--];
            cout<<endl;
        }
        }
    }
};
int main() {
    Stack st(5);
    st.push(10);
    
    st.push(6);
    
    st.push(103);
    
    st.push(0);
    
    st.push(34);
    st.print();
  
    // st.push(4);
    // // st.print();
    
    // st.push(101);
    
    return 0;



return 0;
}