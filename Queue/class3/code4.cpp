// gas station
#include<bits/stdc++.h>
using namespace std;
  int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0;
        int balance=0;
        int dificit=0;
        for(int i=0;i<gas.size();i++){
            balance=balance+gas[i]-cost[i];
            if(balance<0){
                dificit+=abs(balance);
                // dificit aya hai iska matlab us index se nahi ho payega
                start=i+1;
                balance=0;

            }

            
        }
        if(balance-dificit>=0){
            return start;
        }
        return -1;

        
    }
int main() {

return 0;
}