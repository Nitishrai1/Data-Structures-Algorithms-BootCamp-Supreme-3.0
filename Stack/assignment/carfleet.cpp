#include<bits/stdc++.h>
using namespace std;
int carFleet(int target, vector<int>& position, vector<int>& speed) {
        // sabse pahle map karke sort kar do
        map<int,int> mp;
        for(int i=0;i<position.size();i++){
            mp[position[i]]=speed[i];
        }
        for(auto& it:mp){
            cout<<it.first<<" "<<it.second;
            cout<<endl;
        }cout<<endl;
        // postion speed se map ho gya hai
        // ab mp.first position hai or mp.second speed hai 
        // time =distance/speed distance =final- initial 
        // sabke corresponding time nikal lo ki yek ko kitata time lageea
        vector<double> time;
        for(auto& it:mp){
            double t=(double)(target-it.first)/it.second;
            time.push_back(t);

        }

        for(int i:time){
            cout<<i<<" ";
        }

        

        // ab yek top element nikalo or check kar lo agar <= element present hai stack me to pop karte raho pair ho kar jauega last me push karna hoga 
        // ya to isko array se hi kar lo
        stack<double> st;
        for(int i=0;i<time.size();i++){
            double ele=time[i];
            while(!st.empty() && st.top()<=ele){
                st.pop();
            }
            st.push(ele);
        }
        // jo size hai usme se 2*cnt minus karke add kar do
        return st.size();
        //
        
    }  
int main() {

return 0;
}