// wap to convert Binery to decimal
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n,sum=0;
    cin>>n;
    int i=0;
    while(n>0){
        int bit = n%10;
        sum+=bit*pow(2,i++);
        n/=10;
    }
    cout<<sum;
    return 0;
}