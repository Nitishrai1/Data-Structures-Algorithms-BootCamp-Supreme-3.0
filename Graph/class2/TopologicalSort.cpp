#include<bits/stdc++.h>
using namespace std;
void topoDFS(int src,unordered_map<int,bool>& visited, vector<int> adj[],vector<int>& ans){
	    visited[src]=true;
	    
	    for(auto nbr:adj[src]){
	        if(!visited[nbr]){
	            topoDFS(nbr,visited,adj,ans);
	        }
	    }
	   // backtrack karte samaye ans me push kar dena
	   ans.push_back(src);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    unordered_map<int,bool> visited;
	    vector<int> ans;
	    for(int i=0;i<V;i++){
	        if(!visited[i]){
	            topoDFS(i,visited,adj,ans);
	        }
	    }
	    reverse(begin(ans),end(ans));
	    return ans;
	}
int main() {

return 0;
}