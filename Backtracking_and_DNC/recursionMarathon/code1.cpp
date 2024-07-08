// wap to recursive funciton to find the maxiumum sum of non adjacent element in an array
#include<bits/stdc++.h>
using namespace std;
int maximumsum(vector<int>& arr,int st,int end){
    // base case if st==end return
    if(st>=end)return 0;

    // take
    
    int ans1=arr[st]+maximumsum(arr,st+2,end);
    // not take
    
    int ans2=0+maximumsum(arr,st+1,end);
    return max(ans1,ans2);
}
int main() {

    vector<int> arr;
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(1);
    arr.push_back(6);
    arr.push_back(8);
    arr.push_back(5);
    arr.push_back(9);

    int len=arr.size();
    int ans=maximumsum(arr,0,len);
    cout<<"Maximum sum of non adjacent element: "<<ans<<endl;


return 0;
}