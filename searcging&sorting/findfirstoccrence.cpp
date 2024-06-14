// Wap to find the first occerence of the number
#include<bits/stdc++.h>
using namespace std;
int firstOccrence(vector<int> arr,int target){
    int st=0;
    int end=arr.size()-1;
    int mid;
    int index=-1;
    while(st<=end){
        mid=st+(end-st)/2;
        if(arr[mid]==target){
             index=mid;
             end=mid-1;
        }
        else if(target>arr[mid]) st=mid+1;
        else end=mid-1;
    }
    return index;

}

int main() {
    int n;cin>>n;
    vector<int> v1;
    for(int i=0;i<n;i++){
        int data;cin>>data;
        v1.push_back(data);
    }
    int key;
    cout<<"enter the number to be searched: ";cin>>key;
    cout<<firstOccrence(v1,key)<<endl;


return 0;
}