// fint the most approx value when a number is divided by another another number without using % or /
#include<bits/stdc++.h>
using namespace std;
int main() {
    int divided;cin>>divided;
    int divisor;cin>>divisor;
    int st=0;
    int end=divided;
    int ans;
    while(st<=end){
        int mid=st+(end-st)/2;
        int p=divisor*mid;
        if(p==divided) ans= mid;
        if(p>divided){
            end=mid-1;

        }
        else{
            ans=mid;
            st=mid+1;
        }
        cout<<ans;
    }
return 0;
}