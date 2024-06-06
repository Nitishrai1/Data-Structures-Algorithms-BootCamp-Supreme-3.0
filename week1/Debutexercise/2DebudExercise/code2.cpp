// wap to print the reverse of a number
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    int digit=0;
    while(n>0){
        int d=n%10;
        digit=digit*10+d;
        n/=10;
    }
    cout<<digit;

return 0;
}