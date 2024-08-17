#include<bits/stdc++.h>
using namespace std;
	
		   string FirstNonRepeating(string A){
		    // Code here
		    unordered_map<char,int> mp;
		    queue<char> q;
		    string ans="";
		    
		    for(int i=0;i<A.length();i++){
		        char ch=A[i];
		        mp[ch]++;
		        q.push(ch);
		        
		      //  ab check karo for answer
		      while(!q.empty()){
		          char frontele=q.front();
		          if(mp[frontele]==1){
		              ans.push_back(frontele);
		              break;
		          }else{
		              q.pop();
		          }
		      }
		      if(q.empty()){
		          ans.push_back('#');
		      }
		    }
		    return ans;
		}
	
int main() {

return 0;
}