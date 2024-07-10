// wap to tell how many ways posible to paint the n pols when k paints is given such that not more than two adjacent pol have the same color
#include<bits/stdc++.h>
using namespace std;
int calculate(int pol,int paint){
    if(pol==1)return paint;
    if(pol==2)return paint+paint*(paint-1);

    int ans=(paint-1)*(calculate(pol-1,paint)+calculate(pol-2,paint));
    return ans;

}
int main() {
    int poll;cin>>poll;
    int paint;cin>>paint;
    int ans=calculate(poll,paint);
    cout<<ans;
return 0;
}