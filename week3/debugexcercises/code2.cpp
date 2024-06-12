// wap to linear search
#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return i+1;
        }
    }
    return -1;
}
int main() {
    int n, sum=0;
    cin >> n;
    int input[n];
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
    int key;cin>>key;
    cout<<linearSearch(input , n,key);
    

return 0;
}