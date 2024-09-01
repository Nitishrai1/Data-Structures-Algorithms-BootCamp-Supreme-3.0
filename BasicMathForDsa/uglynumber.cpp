#include<bits/stdc++.h>
using namespace std;
 bool isUgly(int n) {
        // edge case check kar lo ki negativc4e number to nahi hai na
        if(n<0 || n==0)return false;
        while(n>1){
            if(n%2==0){
                n=n/2;
            }else if(n%3==0){
                n=n/3;
            }else if(n%5==0){
                n=n/5;
            }else return false;
        }
        // last me 1 ayega to return true kiu ki 1 has not prime facvtors there all of its prime factor are limited to 2 3 5
        return true;
        
        
    }
int main() {

return 0;
}