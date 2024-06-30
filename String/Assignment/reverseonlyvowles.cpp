// wap to revers only vowels in string cpp;
#include<bits/stdc++.h>
using namespace std;
bool check(char ch){
        if((ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') || (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {

        int st=0;
        int end=s.length()-1;
        while(st<=end){
            if(check(s[st]) && check(s[end])){
                swap(s[st],s[end]);
                st++;
                end--;
            }
            else if(check(s[st]) && !check(s[end])){
                end--;
            }
            else if(!check(s[st]) && check(s[end])){
                st++;
            }
            else{
                st++;
                end--;
            }
        }
        return s;
        
    }
int main() {

return 0;
}