// WAp to find the maximum element in thr array using recusion 
#include<bits/stdc++.h>
using namespace std;
void findmax(int arr[],int st,int end,int &mx){
    if(st==end) return;
    mx=max(mx,arr[st]);
    findmax(arr,st+1,end,mx);
}
int main() {
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=0;
    findmax(arr,0,n,mx);
    cout<<"The maximum element in the array is "<<mx<<endl;
    

return 0;
}