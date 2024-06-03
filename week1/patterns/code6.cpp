// WAP to print the inverted half pyramid
// ****
// ***
// **
// *

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    int cnt=n;
    for(int i=0;i<n;i++){
        cnt-=1;
        for(int j=0;j<n;j++){
            if(j>cnt){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }

        }
        cout<<endl;
    }

return 0;
}