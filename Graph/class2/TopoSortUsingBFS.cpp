#include<bits/stdc++.h>
using namespace std;
	void topoBFS(int V,vector<int> adj[] ,vector<int>& ans){
	    
	    
	   // yekk map banao indegree store karne ke liye
	   unordered_map<int,int> indegree;
	   //indegree ko update kar do 
	   for(int i=0;i<V;i++){
	       for(auto nbr:adj[i]){
	           indegree[nbr]++;
	       }
	   }
	    queue<int> q;
	   //ab ckhek karo jiska bhi indegree 0 hai usko queue me dal do
	   //for(auto i:indegree){
	   //    if(i.second==0){
	   //        q.push(i.first);
	   //    }
	   //}
	   for(int i=0;i<V;i++){
	       if(indegree[i]==0){
	           q.push(i);
	       }
	   }
	   
	   //ab main logica hoga hamare bfs ka
	   while(!q.empty()){
	       int front=q.front();
	       q.pop();
	       ans.push_back(front);
	       //ab iske sare bache par itrerete karke indegree -- karo or agaro 0 hai to queue me dalo
	       for(auto nbr:adj[front]){
	           indegree[nbr]--;
	           if(indegree[nbr]==0){
	               q.push(nbr);
	           }
	       }
	   }
	   
	   
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> ans;
	    topoBFS(V,adj,ans);
	    return ans;
	}
int main() {

return 0;
}