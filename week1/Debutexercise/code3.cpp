/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int i=1;
    // while(i<n){
    //     int j = i,count = 2*n+1,gaps=(n-i-1),k=1;
    //     while(k<gaps){
    //         cout<<" ";
    //         k = k + 1;
    //     }
    //     int m = 1,ch = count - 2*gaps;
    //     while(m<ch){
    //         cout<<"*";
    //         m = m + 1;
    //     }
    //     k = 1;
    //     while(k<gaps){
    //         cout<<" ";
    //         k = k + 1;
    //     }
    //     cout<<"\n";
    //     i = i + 1;
    // }
    // doing using for loop
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==n||i+j>n){
                cout<<"* ";

            }else{
                cout<<"  ";
            }
        }
        for(int k=2;k<=i;k++){
            cout<<"* ";
            
        }
        cout<<endl;
        
    }


}