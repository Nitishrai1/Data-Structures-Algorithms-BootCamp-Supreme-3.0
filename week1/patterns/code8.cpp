// WAP to print the inverted hollow half pyramid
// * * * * *
// *     *
// *   *
// *  *
// * *
// *

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    int cnt=n;
    int i,j;
    for ( i = 0; i < n; i++)
    {
        cnt-=1;
        for( j=0;j<n;j++){
            if(j<cnt){
                if((i+j)==n-1){
                    cout<<"* ";
                }
                
            }
            else{

                cout<<"  "; 
            }
        }
        cout<<endl;
        /* code */
    }
    

return 0;
}