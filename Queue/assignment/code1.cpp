#include<bits/stdc++.h>
using namespace std;
// bahut phadu approch hai age se nikal kar kar piche dalte jao jab tak size 1 na ho jaye
int insertatback(queue<int>& q1,int k){
        // ye temperatry queue bana lete hai
        queue<int> temp=q1;
        while(temp.size()>1){
            int step=1;
            while(step<k){
                // first element nikalo back me daleo
                int ele=temp.front();
                temp.pop();
                temp.push(ele);
                step++;
            }
            temp.pop();
        }
        return temp.front();
    }
    int findTheWinner(int n, int k) {

        // sabse pahle n eleme 1-n insert kar lete hai queue me
        queue<int> q1;
        for(int i=1;i<=n;i++){
            q1.push(i);
        }

        int ans=insertatback(q1,k);
        return ans;
        
    }
int main() {

return 0;
}