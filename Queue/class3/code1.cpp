#include<bits/stdc++.h>
using namespace std;
	string FirstNonRepeating(string A){
		    // Code here
		    unordered_map<char,int> mp;
		    string ans="";
		    deque<char> q;
		    for(int i=0;i<A.length();i++){
		        char ch=A[i];
		        mp[ch]++;
		        if(mp[ch]==1){
		            q.push_back(ch);
		            
		        }
		        while(!q.empty()){
		            char frontele=q.front();
		            if(mp[frontele]==1){
		                ans.push_back(frontele);
		                break;
		            }else{
		                q.pop_front();
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