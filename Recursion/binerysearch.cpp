// WAP to find the target using binery search and recursion
#include<bits/stdc++.h>
using namespace std;
bool binerysearch(int arr[],int st,int end,int target){
    if(st>end) return false;
    int mid=st+end/2;
    if(arr[mid]==target){
        return true;
    }
    if(target>arr[mid]){
        return binerysearch(arr,mid+1,end,target);
    }
    else{
        return binerysearch(arr,0,mid-1,target);
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;cout<<"Enter the number to be searched: ";cin>>target;
    if(binerysearch(arr,0,n-1,target)){
        cout<<"Element is present in the array: ";
    }
    else{
        cout<<"Element is not present in the array: ";
    }
return 0;
}