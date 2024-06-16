// fint the most approx value when a number is divided by another another number without using % or /
#include<bits/stdc++.h>
using namespace std;
int main() {
    int divided;cin>>divided;
    int divisor;cin>>divisor;
    int st=-abs(divided);
    int end=abs(divided);
    int ans=-1;
    int mid;
    while(st<=end){
        mid=st+((end-st)>>1);
        int p=divisor*mid;
        if(p==divided){
            ans=mid;
            break;
        }
        if(p>divided){
            end=mid-1;

        }
        else{
            ans=mid;
            st=mid+1;
        }
        
    }
    cout<<"The quuoint of th numbre is "<<ans<<endl;
return 0;
}