// wap to reorganize the string
#include<bits/stdc++.h>
using namespace std;

    string reorganizeString(string s) {
        int hash[26]={0};
        for(int i=0;i<s.length();i++){
            hash[s[i]-'a']++;
        }
        // find the most frequent element
        char max_freq_ele;
        int max_freq=INT_MIN;
        for(int i=0;i<26;i++){
            if(hash[i]>max_freq){
                max_freq=hash[i];
                max_freq_ele=i+'a';
            }
        }
        int index=0;
        while(max_freq>0 && index<s.length()){
            s[index]=max_freq_ele;
            max_freq--;
            index+=2;
        }
        if(max_freq!=0)return "";
        hash[max_freq_ele-'a']=0;
        for(int i=0;i<26;i++){
            while(hash[i]>0){
                index=index>=s.length()?1:index;
                s[index]=i+'a';
                hash[i]--;
                index+=2;
            }
        }
        return s;


      
    }
int main() {

return 0;
}