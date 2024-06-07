// wap to create the fancy pattern
// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ***5*5*5*5*5*5***

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int st=8-i;
        int num=i+1;
        int cnt=num;
        for(int j=0;j<17;j++){
            if(j==st && cnt>0){
                cout<<num;
                st+=2;
                cnt--;
            }else{
                cout<<"*";
            }
            
        }cout<<endl;
    }

return 0;
}
