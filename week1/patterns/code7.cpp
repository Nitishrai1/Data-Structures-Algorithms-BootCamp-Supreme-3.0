// WAP to print the hollow half pyramid
// *
// * *
// *  *
// *   *
// *    *
// * * * *  
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>i||j<i){
                if(j==0||i==n-1){
                    cout<<"* ";
                }
                else cout<<"  ";
                
            }
            else{
                cout<<"* ";
            }
        }cout<<endl;
    }

return 0;
}   