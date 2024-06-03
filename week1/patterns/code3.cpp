// WAP to print the hollow rectangle
// * * * * *
// *       *
// *       *
// * * * * *   

#include<bits/stdc++.h>
using namespace std;
int main() {
        int row;cin>>row;
        int col;cin>>col;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                 if((i==0||i==row-1)){
                    cout<<"* ";
                 }
                 else{
                    if((j==0||j==col-1))
                    cout<<"* ";
                    else cout<<"  ";
                 }
            }
            cout<<endl;
        }

return 0;
}
