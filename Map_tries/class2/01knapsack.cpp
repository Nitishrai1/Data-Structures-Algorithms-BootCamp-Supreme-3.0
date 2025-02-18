#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll solve(int n,int X,vector<int>& v,vector<int>& wt,vector<vector<int>>& dp){
    if(n==0 || X==0){
        return 0;
    }
    if(dp[n][X]!=-1){
        return dp[n][X];
    }
    if(wt[n-1]<=X){
        int pick=v[n-1]+solve(n-1,X-wt[n-1],v,wt,dp);
        int npick=solve(n-1,X,v,wt,dp);
        dp[n][X]=max(pick,npick);
    }
    else{
        dp[n][X]=solve(n-1,X,v,wt,dp);
    }
    
    return dp[n][X];
}


ll max_value(int N, int x, vector<int>& v, vector<int>& a) {
    vector<vector<int>> dp(N+1,vector<int>(x+1,-1));

    ll ans=solve(N,x,v,a,dp);
    return ans;
}


int main() {
    int N, X;
    cin >> N >> X;

    vector<int> v(N), a(N);
    

    for (int i = 0; i < N; i++) {
        cin >> v[i] >> a[i];
    }
  
    ll result = max_value(N, X, v, a);
    
  
    if (result >= 0)
        cout << result << endl;
    else
        cout << "Got caught!" << endl;

    return 0;
}