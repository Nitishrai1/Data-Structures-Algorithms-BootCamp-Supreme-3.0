// wap to print all the subarray of a string using recursion
#include<bits/stdc++.h>
using namespace std;
void printsubarrrayRE(string& str,int st,int end){
    // base case
    if(st==str.length())return;
    if(end==str.length()){
        st=st+1;
        end=st;
    }
    for(int i=st;i<=end;i++){
        cout<<str[i]<<" ";
    }cout<<endl;
    printsubarrrayRE(str,st,end+1);
}
int main() {
    string str="12345";
    int st=0;
    int end=st;
    printsubarrrayRE(str,st,end);

return 0;
}