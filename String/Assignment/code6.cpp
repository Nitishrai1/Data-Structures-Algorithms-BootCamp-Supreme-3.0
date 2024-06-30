// Find the Index of the First Occurrence in a String
#include<bits/stdc++.h>
using namespace std;
int strStr(string haystack, string needle) {
        size_t pos=haystack.find(needle);
        if(pos!=string::npos){
            return pos;
        }
        return -1;
    }
int main() { 

return 0;
}