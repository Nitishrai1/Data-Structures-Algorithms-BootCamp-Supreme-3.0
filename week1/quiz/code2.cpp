#include<bits/stdc++.h>
using namespace std;
int fun(int n){
    if(n%4==0)return n;
    if(n%4==0) return 1;
    if(n%4==2)return n+1;
    else return 0;
}
int main() {
    int n=4;
    cout<<fun(n);

return 0;
}