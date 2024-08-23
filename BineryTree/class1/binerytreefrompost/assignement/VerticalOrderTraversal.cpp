#include<bits/stdc++.h>
using namespace std;
vector<int> verticalOrder(Node *root)
    {
        queue<pair<Node*,int>> q;
        map<int,vector<Node*>> mp;
        q.push(make_pair(root,0));
        
        while(!q.empty()){
            pair<Node*,int> front=q.front();
            Node* frontNode=front.first;
            int dist=front.second;
            
            // map me map kar do node ko uske dist se
            mp[dist].push_back(frontNode);
            q.pop();
            if(frontNode->left){
                q.push(make_pair(frontNode->left,dist-1));
            }
            if(frontNode->right){
                q.push(make_pair(frontNode->right,dist+1));
            }
            
        }
        
        // ab mindist se max distance se jitana bhi node hai sabko ans 
        // me store kar lete hai
        
        vector<int> ans;
        for(auto& pair:mp){
            for(Node* temp:pair.second){
                int data=temp->data;
                ans.push_back(data);
            }
        }
        return ans;
        
    }
int main() {

return 0;
}