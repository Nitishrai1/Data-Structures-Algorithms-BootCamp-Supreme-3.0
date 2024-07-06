// WAP to find the last occurence of a character
#include<bits/stdc++.h>
using namespace std;
int findlastocc(string s,int st,char ch,int& pos){
    if(st==s.length()){
        return pos;
    }
    if(s[st]==ch){
        pos=st;
    }
    int ans=findlastocc(s,st+1,ch,pos);
    return ans;
}
int main() {
    string s="nitish";
    char ch='h';
    int index=0;
    int pos=-1;
    int position=findlastocc(s,index,ch,pos);
    if(position>=0){
        cout<<"element found at index "<<pos<<endl;
    }

return 0;
}