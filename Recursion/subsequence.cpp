// wap a to find all subsequence of a string
#include<bits/stdc++.h>
using namespace std;
void subsequence(string s,int index,string output){
    // base case
    if(index==s.length()){
        cout<<output<<endl;
        return;
    }
    // include
    char ch=s[index];
    subsequence(s,index+1,output+ch); 
    // exclude
    subsequence(s,index+1,output);

    // 1 case ill handle
    // rest recursion call


}
int main() {
    string str="xy";
    string otp="";
    int index=0;
    subsequence(str,index,otp);


return 0;
}