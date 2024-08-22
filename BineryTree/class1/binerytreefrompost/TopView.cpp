#include<bits/stdc++.h>
using namespace std;
 vector<int> topView(Node *root)
    {
        //Your code here
        queue<pair<Node*,int>> q;
        unordered_map<int,Node*> mp;
        q.push(make_pair(root,0));
        int maxdist=INT_MIN;
        int mindist=INT_MAX;
        while(!q.empty()){
            pair<Node*,int> front=q.front();
            Node* frontNode=front.first;
            int dist=front.second;
            maxdist=max(maxdist,dist);
            mindist=min(mindist,dist);
            q.pop();
            // check kar lo ki is dist se koi node map hai ki nahi
            if(mp.find(dist)==mp.end()){
                // tab to bhaiya map kar do
                mp[dist]=frontNode;
            }
            if(frontNode->left){
                q.push(make_pair(frontNode->left,dist-1));
            }
            if(frontNode->right){
                q.push(make_pair(frontNode->right,dist+1));
            }
        }
        // ab min dist se max dist tak traversae karo or element nikal kar push karo
        vector<int> ans;
        for(int i=mindist;i<=maxdist;i++){
            Node* temp=mp[i];
            ans.push_back(temp->data);
        }
        return ans;
        
        
    }
int main() {

return 0;
}