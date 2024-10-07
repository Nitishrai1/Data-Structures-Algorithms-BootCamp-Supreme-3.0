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
    
    void dfs_helper(int node,unordered_map<int,bool> & visited){
        visited[node]=true;
        cout<<node<<", ";
        for(auto nbr:adjweighted[node]){
            if(!visited[nbr.first]){
                dfs_helper(nbr.first,visited);
            }
        }
    }
    void DFS(int n){
        int src=0;
        unordered_map<int,bool> visited;
        // dfs_helper(src,visited);  //for loop laga lete hai taki jo non conceted node hai wo bhi a jaye
        for( int src=0;src<n;src++){
           if(!visited[src]){
             dfs_helper(src,visited);
           }
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


    // Creating a DFS traversal
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
    g3.DFS(6);







return 0;
}