// creating a heap using priority queue
#include<bits/stdc++.h>
using namespace std;
int main() {
    priority_queue<int> q1; 
    // This will insert in greter to smaller order also called a max heap
    // q1.push(10);
    // q1.push(40);
    // q1.push(50);
    // q1.push(20);
    // q1.push(30);
    // q1.push(80);
    // cout<<q1.top()<<endl;
    // q1.pop();
    // cout<<q1.top();
    // creating a min heap
    priority_queue<int,vector<int>,greater<int>> q2;  //min heap
    q2.push(20);
    q2.push(90);
    q2.push(10);
    q2.push(0);
    q2.push(60);
    cout<<q2.top()<<endl;

return 0;
}   