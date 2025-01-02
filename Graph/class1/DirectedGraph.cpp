#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    // dir
    // 0 -> undorected
    // 1 -> directed
    unordered_map<int,list<pair<int,int>>> adjlist;
    void add(int u,int v,int weight,int dir){
        if(dir==0){
            adjlist[u].push_back({v,weight});
            adjlist[v].push_back({u,weight});

        }else{
            adjlist[u].push_back({v,weight});

        }


    }
    void printGraph(int n){
        for(int i=0;i<n;i++){
            cout<<i <<" -> ";
            list<pair<int,int>> pair=adjlist[i];
            for(auto it:pair){
                cout<<it.first<<", ";
                cout<<"with weight"<<it.second<<endl;
            }


        }

    }

};
int main() {
    Graph g;
    g.add(0,1,3,1);
    g.add(0,2,4,1);
    g.add(1,2,8,1);
    g.add(2,1,3,1);
    g.add(3,0,3,1);
    g.printGraph(4);



return 0;
}