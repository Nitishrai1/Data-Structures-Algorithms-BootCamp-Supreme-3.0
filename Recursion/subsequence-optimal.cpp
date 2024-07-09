// wap to find all the subsequence of a string
#include<bits/stdc++.h>
using namespace std;
int main() {
        string str;cin>>str;
        int n=str.length();
        int totallenght=pow(2,n);
        for(int i=0;i<totallenght;i++){
            string ans="";
            for(int j=0;j<n;j++){
                // check the jth bit is set in i
                if(i&(1<<j)){
                    ans+=str[j];
                }
            }
            cout<<ans<<endl;
        }
return 0;
}       