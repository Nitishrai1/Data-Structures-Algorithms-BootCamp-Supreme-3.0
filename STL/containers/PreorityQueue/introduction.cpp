#include<bits/stdc++.h>
using namespace std;
int main() {
    priority_queue<int> p1;
    p1.push(10);
    p1.push(80);
    p1.push(20);
    p1.push(440);
    p1.push(200);

    cout<<p1.top()<<endl;
    p1.pop();
    cout<<p1.top()<<endl;
    // isempty function return whether the queue is empty or not
    // implimenting min heap using priority queue

    priority_queue<int,vector<int>, greater<int>> pq;
    //  here greater difine that the min heap will be in desinding order vector is the  implimenting type 
    // min heap : smallest element have the highest priority 
    pq.push(90);
    pq.push(30);
    pq.push(10);

    // queue will be 10 30 90
    cout<<pq.top();   //10
    pq.pop();   //10 will be removed





return 0;
}