#include<bits/stdc++.h>
using namespace std;
  Node* maptheNodeAndReturnTraget(Node* root,int target,unordered_map<Node*,Node*>& parentMap){
        // queue se level order traversal kar lete hai
        queue<Node*> q1;
        Node* targetNode=0;
        q1.push(root);
        parentMap[root]=0;
        while(!q1.empty()){
            Node* front=q1.front();
            q1.pop();
            if(front->data==target){
                targetNode=front;
            }
            if(front->left){
                q1.push(front->left);
                parentMap[front->left]=front;
            }
            if(front->right){
                q1.push(front->right);
                parentMap[front->right]=front;
                
            }
            
        }
        return targetNode;
        
    }
    int timetoburn(Node* starting, unordered_map<Node*,Node*>& parentMap){
        // isme yek queue banao konsa burn ho raha uske liye or yek isburned banao konsa burn ho gya ahi
        int totalTime=0;
        queue<Node*> q1;
        unordered_map<Node*,bool> isburned;
        isburned[starting]=true;
        q1.push(starting);
        while(!q1.empty()){
            int n=q1.size();
            bool isspreading=false;
            for(int i=0;i<n;i++){
                Node* front=q1.front();
                q1.pop();
                if(front->left && !isburned[front->left]){
                    // push karo do or update kar do
                    q1.push(front->left);
                    isburned[front->left]=true;
                    isspreading=1;
                }
                // same case right ke liye bhiu
                if(front->right && !isburned[front->right]){
                    // push karo do or update kar do
                    q1.push(front->right);
                    isburned[front->right]=true;
                    isspreading=1;
                }
                // yek case parent ka bhi dekh lo
                if(parentMap[front] && !isburned[parentMap[front]]){
                    // parent ko bhi burn kar do
                    q1.push(parentMap[front]);
                    isburned[parentMap[front]]=true;
                    isspreading=1;
                }
                
            }
            if(isspreading){ //ye uske liye hai ki fire spread ho rhaa hai ki nahi ki sare burn hi gya hai
                totalTime++;
            }
        }
        return totalTime;
        
    }
    int minTime(Node* root, int target) 
    {
        
        // sabse pahle yek map bana lo parent node ko store karenge with child
        // or us node par pahuch jao jaha se aag lagana hai
        unordered_map<Node*,Node*>parentMap;
        Node* targetburn=maptheNodeAndReturnTraget(root,target,parentMap);
        return timetoburn(targetburn,parentMap);
        
        
    }
int main() {

return 0;
}