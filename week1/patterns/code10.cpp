// create a numeric half pyramid
// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3 
// 1 2 
// 1
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    int cnt=n;
    for(int i=0;i<n;i++){
        
        for(int j=1;j<n;j++){
            if(j<cnt){
                cout<<j<<" ";
            }
            else{
                cout<<"  ";
            }
            
        }
        cnt-=1;
        cout<<endl;
    }


return 0;
}
