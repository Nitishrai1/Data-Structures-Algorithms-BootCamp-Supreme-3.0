#include<bits/stdc++.h>
using namespace std;
 void solve(Node* root,vector<int> & arr){
        if(root==NULL)return;
        solve(root->left,arr);
        arr.push_back(root->data);
        solve(root->right,arr);
        
    }
    void merge(vector<int>& ans,vector<int>& arr1,vector<int>& arr2){
        int index1=0;
        int index2=0;
        while(index1<arr1.size() && index2<arr2.size()){
            
            if(arr1[index1]<arr2[index2]){
                ans.push_back(arr1[index1++]);
            }else{
                ans.push_back(arr2[index2++]);                    
            }
        
            
        }
        if(index1<arr1.size()){
                while(index1<arr1.size()){
                    ans.push_back(arr1[index1++]);
                }
            }
            if(index2<arr2.size()){
                while(index2<arr2.size()){
                    ans.push_back(arr2[index2++]);
                }
            }
    }
 
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        // yek kam karte hia dono bst ko yek array me dal kar new bst bana kar bhej dete hai
        vector<int> arr1;
        solve(root1,arr1);
        vector<int> arr2;
        solve(root2,arr2);
        // simple merge ka funciton like dete hia
        vector<int> ans;
        merge(ans,arr1,arr2);\
        return ans;
        
        
    }
int main() {

return 0;
}