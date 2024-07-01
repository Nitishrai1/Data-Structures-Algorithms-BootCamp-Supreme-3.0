// WAP to find the string is isomorphich or not
#include<bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t) {
        int hash[256]={0}; //create a hash of 256 caracter initialize it with 0
        bool isCharMapped[256]={0}; //stores if s[i] is mapped to some character or not
        for(int i=0;i<s.length();i++){
            if(hash[s[i]]==0 && isCharMapped[t[i]]==0){
                hash[s[i]]=t[i];
                isCharMapped[t[i]]=true;
            }
        } 
        for(int i=0;i<s.length();i++){
            if(char(hash[s[i]])!=t[i]){
                return false;
            }
        }
        return true;
        
    }
int main() {

return 0;
}