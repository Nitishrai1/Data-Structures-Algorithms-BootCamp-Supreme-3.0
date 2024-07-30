// Implement two stack using single array
#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int top1,top2;
    int *arr;
    int size;
    Stack(int capacity){
        this->size=capacity;
        this->top1=-1;
        this->top2=size;
        this->arr=new int[size];
    }

    void push1(int data){
        if(top1-top2==1){
            cout<<"Stack is full";
        }else{
            top1--;
            arr[top1]=data;
        }
        
    }
    void push2(int data){
        if(top1-top2==1){
            cout<<"Stack is full";
        }
        else{
            top2++;
            arr[top2]=data;
        }

    }
    void pop1(){
        if(top1==size){
            // stack empty hai
            cout<<"Stack is empty";
        }else{
            top1++; //upper chale jao
        }

    }
    void pop2(){
        if(top2==-1){
            cout<<"Stack is empty";
        }
        else{
            top2--;  //niche chale jao
        }

    }
    void print(){
        cout<<"top1->"<<top1<<endl;
        cout<<"top2->"<<top2<<endl;
        
    }
};
int main() {
    Stack st(10);
    st.push1(21);
    st.push2(20);
    st.push1(29);
    st.push1(9);
    st.push2(1);
    st.push2(21);
    st.push1(51);
    st.push1(32);
    st.push1(432);
    st.push1(19);
    st.print();


    
    
// dsfk

return 0;
}