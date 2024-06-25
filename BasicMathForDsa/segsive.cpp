// find the prie number between give a low and a high
#include<bits/stdc++.h>
using namespace std;
vector<bool> Sive(int n){
    vector<bool> ans(n+1,true);
    ans[0]=ans[1]=false;
    for(int i=2;i<=sqrt(n);i++){
        if(ans[i]){
            int j=i*i;
            while(j<=n){
                ans[j]=false;
                j+=i;
            }
        }
    }
    return ans;
}
vector<bool> segmentedseive(int l,int h){
    // get me prime marking array
    vector<bool> sieve=Sive(sqrt(h));
    vector<int> baseprime;
    for(int i=0;i<sieve.size();i++){
        if(sieve[i]){
            baseprime.push_back(i);
        }
    }
    vector<bool> segsive(h-l+1,true);
    if(l==1){
        segsive[0]=false;
    }
    for(auto prime:baseprime){
        int first_mul=(l/prime)*prime;
        first_mul=(first_mul<l)?first_mul+prime:first_mul;
        int j=max(first_mul,prime*prime);
        while(j<=h){
            segsive[j-l]=false;
            j+=prime;
        }

    }
    return segsive;
}
int main() {
    int l,h;cin>>l>>h;
    vector<bool> segsive=segmentedseive(l,h);
    for(int i=0;i<segsive.size();i++){
        if(segsive[i]){
            cout<<i+l<<" ";
        }
    }
return 0;
}