#include<bits/stdc++.h>
using namespace std;
 bool dfs_helper(int src,unordered_map<int,bool>& visited,vector<int> adj[],unordered_map<int,bool>& dfstracker){
        visited[src]=true;
        dfstracker[src]=true;
        for(auto nbr:adj[src]){
            if(!visited[nbr]){
                bool ans=dfs_helper(nbr,visited,adj,dfstracker);
                if(ans){
                    return true;
                }
            }
            else if(visited[nbr] && dfstracker[nbr]){
                return true;
            }
        }
        dfstracker[src]=false; //backtrack karte chalte hai
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        unordered_map<int,bool> visited;
        unordered_map<int,bool> dfstracker;
        bool ans=false;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                ans=dfs_helper(i,visited,adj,dfstracker);
                if(ans){
                    break;
                }
            }
        }
        return ans;
        
    }
int main() {

return 0;
}