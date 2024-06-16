// Given a sorted array arr[] of size N, some elements of array are moved to either of the adjacent positions, i.e., arr[i] may be present at arr[i+1] or arr[i-1] i.e. arr[i] can only be swapped with either arr[i+1] or arr[i-1]. The task is to search for an element in this array.

// Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 40
// Output: 2
// Explanation: Output is index of 40 in given array i.e. 2

// Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 90
// Output: -1
// Explanation: -1 is returned to indicate the element is not present

// Search in nearly sorted aray
#include<bits/stdc++.h>
using namespace std;
bool NearlySorted(int arr[],int n,int target){
    int st=0;
    int end=n;
    int mid;
  
    while (st<=end)
    {
        mid=st+(end-st)/2;
        // condition 1 element will be on the mid
        if(target==arr[mid]) return mid;

        // condition 2 element will be on mid+1;
        if(target==arr[mid+1]) return mid+1;

        // else at mid-1;
        if(target==arr[mid-1]) return mid-1;
        
        if(target>arr[mid]){
            st=mid+2;
        }
        else{
            end=mid-2;
        }
    }
    return false;
    

}
int main() {
    int arr[]={10, 3, 40, 20, 50, 80, 70};
    int n=7;
    int target=30;
    bool ans=NearlySorted(arr,n,target);
    if(ans==true){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }

return 0;
}