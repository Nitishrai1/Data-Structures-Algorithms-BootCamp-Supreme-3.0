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

    }

};
int main() {

    Graph g1;
    g1.addEdge(0,1,0);
    g1.addEdge(0,2,0);
    g1.addEdge(1,3,0);
    g1.addEdge(3,4,0);
    g1.addEdge(2,1,0);
    g1.printAdjlist();

    // now creating a weighted graph



return 0;
}