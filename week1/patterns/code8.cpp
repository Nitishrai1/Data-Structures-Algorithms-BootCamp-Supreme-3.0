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
        
        for( j=0;j<n;j++){
            if((i==0||j==0)){
                cout<<"* ";
            }
            else{
                if(i+j==n-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }

            }
        }
        cout<<endl;
        /* code */
    }
    

return 0;
}