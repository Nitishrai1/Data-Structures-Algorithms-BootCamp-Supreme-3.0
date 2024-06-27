// WAP to print the digit of the number using recusion
#include<bits/stdc++.h>
using namespace std;
void printdigit(int n){
    if(n==0) return;
    int digit=n%10;
    cout<<digit<<" ";
    printdigit(n/10);
}
int main() {
    int n;cin>>n;
    printdigit(n);

return 0;
}