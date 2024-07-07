// wap to merge two sorted array
#include<bits/stdc++.h>
using namespace std;
void mergersort(vector<int>& v1,vector<int>& v2,vector<int>& ans,int i,int j){
    while (i<v1.size() && j<v2.size())
    {
        if(v1[i]>=v2[j]){
            ans.push_back(v2[j]);
            j++;
        }
        
        else{
            ans.push_back(v1[i]);
            i++;
        }
        /* code */
    }
    if(i<v1.size()){
        while(i<v1.size()){
            ans.push_back(v1[i++]);
        }
    }
    if(j<v2.size()){
        while(j<v2.size()){
            ans.push_back(v2[j++]);
        }
    }

}
int main() {
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(90);
    v1.push_back(23);
    v1.push_back(103);
    v1.push_back(310);
    v1.push_back(80);
     vector<int> v2;
    v2.push_back(11);
    v2.push_back(0);
    v2.push_back(2);
    v2.push_back(1033);
    v2.push_back(80);
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    vector<int> ans;
    int i=0,j=0;
    mergersort(v1,v2,ans,i,j);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }



return 0;
}