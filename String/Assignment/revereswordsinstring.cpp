#include<bits/stdc++.h>
using namespace std;
  void rev(string& s,int st,int end){
        while(st<end){
            swap(s[st++],s[end--]);
        }
    }
    string reverseWords(string s) {
    //    yek method hai stringstream ko bass word leta hai or usko token me badal deta hai
        // string ans="";
        // stringstream ss(s);
        // string token="";
        // while(ss>>token){
        //     ans=token+" "+ans;
        // }
        // // reverse ho gya hai ab yek kam kare hai check for traling whitespaces hata do
        // ans.pop_back(); //last ka space hata diye hai
        // return ans;

        // Optimal way is using two pointer
        // sabse pahle pure string ko reverse kar do fir har yek word ko reverse kar dena
        reverse(s.begin(),s.end());
        int st=0;
        int end=s.length();
        int l=0;
        int r =0;
        while(st<end){
            // sabse pahle word banao usko reverse karo
           
            while(st<end && isalpha(s[st])){
                s[r]=s[st];
                st++;
                r++;
            }
            // swap kar do from l to r
            if(l<r){
                rev(s,l,r-1);
                s[r]=' ';
                r++;
                l=r;
            }
            st++;

        }
       s= s.substr(0,r-1);
        return s;
    }
int main() {

return 0;
}