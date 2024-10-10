#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<int>> adj;

    void addEdge(int u,int v,int direction){
        // 0-> undirected
        // 1-> directed
        if(direction==0){
            adj[u].push_back(v);
            adj[v].push_back(u);

        }else{
            adj[u].push_back(v);
        }

    }

    void printgraph(int n){
        for(int i=0;i<n;i++){
            cout<<i<<" {";
            for(auto nbr:adj[i]){
                cout<<nbr<<", ";
            }
            cout<<"}"<<endl;
        }
    }

    void shortedtpathBFS(int s,int dist){

        unordered_map<int,bool> visited;
        unordered_map<int,int> parent;
        queue<int> q;
        q.push(s);
        visited[s]=true;
        parent[s]=-1;
        while(!q.empty()){
            int front=q.front();q.pop();
            for(auto nbr:adj[front]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr]=true;
                    parent[nbr]=front;
                }
            }
        }
        // ab mera parent wala map populate ho gya hai bas traverse karna hai
        vector<int> path2;
        int node=dist;
        while(node!=-1){
            path2.push_back(node);
            node=parent[node];
        }
        reverse(begin(path2),end(path2));
        for(auto i:path2){
            cout<<i<<"->";
        }cout<<endl;
    

    }

};
int main() {
     Graph g1;
    g1.addEdge(0,1,0);
    g1.addEdge(0,2,0);
    g1.addEdge(1,3,0);
    g1.addEdge(3,4,0);
    g1.addEdge(2,1,0);

    g1.shortedtpathBFS(0,3);

return 0;
}