
#include<bits/stdc++.h>
using namespace std;
bool isPowerOFtwo(unsigned n){
    return n>0&&(n&(n-1))==0;
}
int fun(unsigned n){
    if(!isPowerOFtwo(n))return -1;
    unsigned i=1,pos=1;
    while (!(i&n))
    {
        i=i<<1;
        pos++;
        /* code */
    }return pos;
    
}
int main() {
    unsigned n;cin>>n;
    cout<<fun(n);

return 0;
}