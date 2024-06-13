// Find the pivot index
#include<bits/stdc++.h>
using namespace std;
 int pivotIndex(vector<int>& nums) {
        // int st=0;
        // int n=nums.size();
        // while(st<n){
        //     int sum1=0;
        //     int sum2=0;
        //     for(int i=0;i<st;i++){
        //         sum1+=nums[i];
        //     }
        //     for(int j=st+1;j<n;j++){
        //         sum2+=nums[j];
        //     }
        //     if(sum1==sum2) return st;
        //     st++;
        // }
        // return -1;
        int n=nums.size();
        vector<int> leftarr(n);
        vector<int> rightarr(n);
        for(int i=1;i<n;i++){
            leftarr[i]=leftarr[i-1]+nums[i-1];

        }
        for(int i=n-2;i>=0;i--){
            rightarr[i]=rightarr[i+1]+nums[i+1];

        }
        for(int i=0;i<n;i++){
            if(leftarr[i]==rightarr[i])return i;
        }
        return -1;


        
    }
int main() {

return 0;
}