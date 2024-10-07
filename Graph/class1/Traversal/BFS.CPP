#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
    unordered_map<int,list<int>> adjlist;
    unordered_map<int,list<pair<int,int>>> adjweighted;
    void addEdge(int a,int b,bool direction){
        // direction 0 undirected
        // direction 1 directed 
        if(direction==0){
            adjlist[a].push_back(b);
            adjlist[b].push_back(a);
        }else{
            adjlist[a].push_back(b);
        }
    }
    void printAdjlist(){
        for(auto i:adjlist){
            cout<<i.first<<"->";
            cout<<"{";
            for(auto j:i.second){
                cout<<j<<", ";
            }cout<<"}"<<endl;
        }
    }
    void addAdjweighted(int a,int b,int weight,int direction){
        // wigheted hai na to isko a node me b push karenge with weight also check if it is directed or not
        if(direction==0){
            // iska matlab hai ki graph undirected hai
            adjweighted[a].push_back(make_pair(b,weight));
             adjweighted[b].push_back(make_pair(a,weight));
        }else{
             adjweighted[a].push_back(make_pair(b,weight));
        }

    }
    void printweightedgraph(){
        for(auto node:adjweighted){
            cout<<node.first<<"->";
            cout<<"{";
            for(auto val:node.second){
                cout<<" conected to "<<val.first<<" with waight "<<val.second;
            }
            cout<<"}";
            cout<<endl;
        }
    }


    void BFSTraversal(int src){
        unordered_map<int,bool> visited;
        queue<int> q;
        q.push(src);
        visited[src]=true;

        while(!q.empty()){
            // front element nikal lete ahia
            int front=q.front();q.pop();
            cout<<front<<", ";
            // front element par traversa karte hai jo visited nahi hai usko queu me puch karte hai or ja BFS ham log directed wale par kar rahe hai to weight ko ignore mar denge
            for(auto neighbour:adjweighted[front]){
                int node=neighbour.first;
                int weight=neighbour.second;
             
                if(visited[node]==false){
                    q.push(node);
                    visited[node]=true;
                }
            }
            // cout<<endl;
        }
    }
};
int main() {

    Graph g1;
    g1.addEdge(0,1,0);
    g1.addEdge(0,2,0);
    g1.addEdge(1,3,0);
    g1.addEdge(3,4,0);
    g1.addEdge(2,1,0);
    // g1.printAdjlist();

    // now creating a weighted graph
    Graph g2;
    g2.addAdjweighted(1,2,5,0);
    g2.addAdjweighted(2,2,1,0);
    g2.addAdjweighted(3,5,3,0);
    g2.addAdjweighted(4,6,6,0);
    g2.addAdjweighted(5,1,12,0);
    g2.addAdjweighted(6,3,10,0);

    // now lets print the graph

    // g2.printweightedgraph();

    // Now lets perform BFS
    Graph g3;
    g3.addAdjweighted(0,3,5,1);
    g3.addAdjweighted(0,5,1,1);
    g3.addAdjweighted(0,2,3,1);
    g3.addAdjweighted(3,5,6,1);
    g3.addAdjweighted(2,5,5,1);
    g3.addAdjweighted(5,4,10,1);
    g3.addAdjweighted(5,6,10,1);
    g3.addAdjweighted(4,1,10,1);
    g3.addAdjweighted(6,1,10,1);
    g3.BFSTraversal(0);








return 0;
}