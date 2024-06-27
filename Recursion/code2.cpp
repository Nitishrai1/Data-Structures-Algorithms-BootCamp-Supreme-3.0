#include<bits/stdc++.h>
using namespace std;

bool find(int arr[],int target,int st,int end)
{
    if(arr[st]==target) return true;
    if(st==end) return false;
    return find(arr,target,st+1,end);
  
}
int main() {
    // Wap to find the target in array using recursion
    int arr[]={1,2,3,4,5,6};
    int target=10;
    if(find(arr,target,0,5)){
        cout<<"Present";
    }else{
        cout<<"Not present";
    }

return 0;
}