#include<bits/stdc++.h>
using namespace std;
int FindOddOccuring(int arr[],int n){
    int st=0;
    int end=n-1;
    if(n==1) return arr[0];  //for single element
    
    while(st<=end){
        int mid=st+(end-st)/2;
        // if index of first position 
        if ((mid == 0 && arr[mid] != arr[mid + 1]) ||
            (mid == n - 1 && arr[mid] != arr[mid - 1]) ||
            (mid > 0 && mid < n - 1 && arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])) {
            return arr[mid];
        }
        if(st==end){
            // yahi element odd times hai
            return arr[st];
        }
        // no duplicate
        if(mid-1>=0 && arr[mid]!=arr[mid-1] && mid+1<n && arr[mid]!=arr[mid+1]){
            return arr[mid];
        }
        // duplicate on left side
        if( mid-1>0  && arr[mid]==arr[mid-1]){
            int paristartingIndex=mid-1;
            if(paristartingIndex&1){
                //pair starting index is odd
                // move to left part
                end=mid-1;  //moving to left par
            }
            else{ 
                // pair starting index is even move to right part
                st=mid+1;

            }
        }
        // duplicate exist right side
        else if( mid+1<n-1 &&arr[mid]==arr[mid+1]){
            int paristartingIndex=mid-1;
            if(paristartingIndex&1){
                //pair starting index is odd
                // move to left part
                end=mid-1;  //moving to left par
            }
            else{ 
                // pair starting index is even move to right part
                st=mid+1;

            }
        }

    }
    return -1;

}

int main() {
    int arr[5]={1,1,4,4,2};
    int ans=FindOddOccuring(arr,5);
    cout<<"Odd occureing element is: "<<ans;

return 0;
}