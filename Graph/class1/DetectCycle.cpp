#include<bits/stdc++.h>
using namespace std;
bool checkforcycle(int src,unordered_map<int,bool>& visited,vector<int> adj[]){
        unordered_map<int,int> parent;
        queue<int> q;
        q.push(src);
        visited[src]=true;
        parent[src]=-1;
        while(!q.empty()){
            int ele=q.front();q.pop();
            
            for(auto nbr:adj[ele]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr]=true;
                    parent[nbr]=ele;
                }else if(visited[nbr]==true && nbr!=parent[ele]){
                    return true;
                }
            }
        }
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        unordered_map<int,bool> visited;
        bool ans=false;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                ans=checkforcycle(i,visited,adj);
                if(ans==true){
                    break;
                }
            }
        }
        return ans;
    }
int main() {

return 0;
}