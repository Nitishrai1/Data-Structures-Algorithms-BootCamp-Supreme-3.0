// FIND The first repeating eleemnt in the array
#include<bits/stdc++.h>
using namespace std;
int firstRepeated(int arr[], int n) {
        // code here
        // int st=0;
        // int next=1;
        // while(st<n){
        //     if(next==n-1){
        //         st++;
        //         next=st+1;
        //     }
        //     else if(arr[st]==arr[next]) return st+1;
        //     if(next<n){
        //         next++;
        //     }
            
        // }
        // return -1;
        int maxele=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>maxele){
                maxele=arr[i];
                
            }   
        }
        vector<int> temp(maxele+1,0);
        for( int i=0;i<n;i++){
            int data=arr[i];
            temp[data]++;
        }
        for(int i=0;i<n;i++){
            int data=arr[i];
            if(temp[data]>1){
                return i+1;
            }
        }
        return -1;
        unordered_map<int,int> hash;
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(hash[arr[i]]>1)return i+1;
        }
        return -1;
        
    }
int main() {

return 0;
}