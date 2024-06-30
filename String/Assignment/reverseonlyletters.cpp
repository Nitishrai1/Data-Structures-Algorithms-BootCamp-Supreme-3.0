// wap to reverse only letter in cpp
#include<bits/stdc++.h>
using namespace std;
 string reverseOnlyLetters(string s) {
        int st=0;
        int end=s.length()-1;
        while(st<end){
            if(!((s[st]>='a' && s[st]<='z') || (s[st]>='A' && s[st]<='Z'))){
                st++;
            }
            else if(!((s[end]>='a' && s[end]<='z') || (s[end]>='A' && s[end]<='Z'))){
                end--;
            }
            else{
                swap(s[st],s[end]);
                st++;
                end--;
            }
        }
        return s;
        
    }
int main() {

return 0;
}