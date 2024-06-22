// 
#include<bits/stdc++.h>
using namespace std;
  bool PossibleSol(int arr[],int size,int mid,int stu){
       long long pagesum=0;
       long long c=1;
       for(int i=0;i<size;i++){
           if(arr[i]>mid) return false;
           if(pagesum+arr[i]>mid){
               c++;
               pagesum=0;
               pagesum+=arr[i];
               if(c>stu){
                   return false;
               }
               
           }
           else{
               pagesum+=arr[i];
           }
       }
       return true;
    }
 
    // Function to find minimum number of pages.
    long long findPages(int n, int arr[], int m) {
        // code here
        if(m>n) return -1;
        long long st=0;
        long long end=accumulate(arr,arr+n,0);
        
        long long ans=-1;
        // total student=m
        while(st<=end){
            long long mid=st+(end-st)/2;
            if(PossibleSol(arr,n,mid,m)){
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return ans;
    }
int main() {

return 0;
}