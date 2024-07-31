#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool solve(vector<int>& arr,int st,vector<int>& side){
        if(st==arr.size()){
            return side[0]==0 && side[1]==0 && side[2]==0 && side[3]==0;
        }
        bool ans=false;
        for(int i=0;i<side.size();i++){
            if(arr[st]<=side[i]){
                side[i]-=arr[st];
                ans=ans||solve(arr,st+1,side);
                if(ans==true)return true;
                side[i]+=arr[st];
            }
            
        }
        return false;
    }
    static bool cmp(int a,int b){
        return a>b;
    }
        
    
    bool makesquare(vector<int>& matchsticks) {
        if(matchsticks.size()<4)return false;

        // ab yek kam karo ki total sum nikal no
        int sum=0;
        for(int i:matchsticks){
            sum+=i;
        }
        if(sum%4!=0)return false;
        int parts=sum/4;
        
        // ab agar  ham log  4 bar ye parts subset array me bana denge to return true else return false
        sort(matchsticks.begin(),matchsticks.end(),cmp);
        vector<int> side(4,parts);
        return solve(matchsticks,0,side);

    }
};
int main() {

return 0;
}