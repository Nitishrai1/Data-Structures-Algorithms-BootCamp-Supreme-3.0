// reverse a string using reccursion
#include<bits/stdc++.h>
using namespace std;
void reverse(string& str,int st,int end){
    if(st>=end)return;
    swap(str[st],str[end]);
    reverse(str,st+1,end-1);
}
int main() {
string str="nitish";
int i=0;
reverse(str,i,str.length()-1);
cout<<str;
return 0;
}