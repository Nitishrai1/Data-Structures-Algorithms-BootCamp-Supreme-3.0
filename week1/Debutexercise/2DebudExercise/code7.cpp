// WAP to find the second largest number in an array
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int firstmaxi=INT_MIN,secondmaxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>firstmaxi){
            secondmaxi=firstmaxi;
            firstmaxi=arr[i];
        }
    }
    cout<<secondmaxi;

return 0;
}