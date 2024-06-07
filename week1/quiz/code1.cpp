#include<bits/stdc++.h>
using namespace std;
void fun(int& num,int k){
    num&=(~(1<<k));
    cout<<num;
    }
int main() {

    int num=7;
    int k=1;
    fun(num,k);



return 0;
}