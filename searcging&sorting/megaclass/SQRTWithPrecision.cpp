// wap to print the sqrt of a number with precision
#include<bits/stdc++.h>
using namespace std;
int sqrt(int n){
    int st=0;
    int e=n;
    int mid;
    int ans=0;
    while (st<=e)
    {
        mid=st+(e-st)/2;
        if(mid*mid==n) return mid;
        if(mid*mid<n){
            ans=mid;
            st=mid+1;
        }
        else{
            e=mid-1;
        }
        /* code */
    }
    return ans;
    
}
double PrecisionSqrt(int n){
    // int st=0,e=n;
    // int ans=0;
    // double sq=sqrt(n);
    // int precision=4;
    // double step=0.1;
    // while (precision--)
    // {
    //     double j=sq;
    //     while (j*j<=n)
    //     {
    //         sq=j;
    //         j+=step;
    //         /* code */
    //     }
    //     step/=10;
        
    //     /* code */
    // }
    // return sq;
     double st=0;
    double e=n;
    double mid;
    double ans=0;
    while ((e-st)>0.00000001)
    {
        mid=st+(e-st)/2;
        if(mid*mid==n) return mid;
        if(mid*mid<n){
            ans=mid;
            st=mid;
        }
        else{
            e=mid;
        }
        /* code */
    }
    return ans;
    

}
int main() {
    int n;cin>>n;
    double ans=PrecisionSqrt(63);
    printf("The sqret of the number is %.9f ",ans);


return 0;
}