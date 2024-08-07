#include<bits/stdc++.h>
using namespace std;
void reverseKgroup(queue<int>& q,int k,int size){
    // base case bar bar stack ke k size ka dalo or queue me puch kar do
    if(size>=k){
        // pakka revse hoga
        stack<int> st;
        for(int i=0;i<k;i++){
            st.push(q.front());  
            q.pop();
            
        }
        // fetch element form stack inster in queu
        for(int i=0;i<k;i++){
            int ele=st.top();
            st.pop();
            q.push(ele);
        }
        // yek case maine solve kar liye hai baki recursion sambhal lega
        reverseKgroup(q,k,size-k);
    }else{
        // iska matlan as it is queue ke front se utha kar end me insert kar do 
        for(int i=0;i<size;i++){
            int ele=q.front();
            q.pop();
            q.push(ele);
        }
    }

}
int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);
    int k=3;
    int size=q.size();
    reverseKgroup(q,k,size);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    




return 0;
}