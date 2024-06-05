/*
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE
*/
/*
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE
*/
#include<iostream>
using namespace std;

int main() {
    int i,j,n;;
    cin>>n;
    
    for(i=1;i<=n;i++){
        char p='E'-i+1;
        for(j=0;j<i;j++){
            cout<<p;
            p+=1;
        }
        cout<<endl;
    }
}