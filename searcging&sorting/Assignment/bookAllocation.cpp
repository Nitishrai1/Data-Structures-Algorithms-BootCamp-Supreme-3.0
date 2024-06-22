// You have n books, each with arr[i] number of pages. m students need to be allocated contiguous books, with each student getting at least one book.
// Out of all the permutations, the goal is to find the permutation where the sum of maximum number of pages in a book allotted to a student should be minimum, out of all possible permutations.

// Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).

 

// Examples:

// Input: n = 4, arr[] = {12,34,67,90}, m = 2
// Output: 113
// Explanation: Allocation can be done in following ways:
// {12} and {34, 67, 90} Maximum Pages = 191
// {12, 34} and {67, 90} Maximum Pages = 157
// {12, 34, 67} and {90} Maximum Pages =113.
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