// Find the two's compliment of a number
#include<bits/stdc++.h>
using namespace std;
void TwosCompliment(vector<int> v1){
    int size=v1.size();
    vector<int> ans(size,0);
    // 1's compliment
    for(int i=size-1,k=ans.size()-1;i>=0,k>=0;i--,k--){
        ans[k]=v1[i]^1;
        // v1[i]=(v1[i]==0)?1:0;
    }
    int carry=1;
    // adding carry bit
    
    for(int i=size-1;i>=0;i--){
        int sum=ans[i]+carry;
        ans[i]=sum%2;
        carry=sum/2;
        if(carry==0){
            break;
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main() {
    int n;cin>>n;
    // convert to binery
    vector<int> v1;
    if(n==0){
        v1.push_back(0);
    }
    while(n>0){
        int bit=n%2;
        v1.push_back(bit);
        n=n>>1;

    }

    
    reverse(v1.begin(),v1.end());
    TwosCompliment(v1);

    

return 0;
}