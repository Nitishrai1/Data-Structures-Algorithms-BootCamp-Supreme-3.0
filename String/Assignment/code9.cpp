// wap to convert a string to integer 
#include<bits/stdc++.h>
using namespace std;

    int myAtoi(string s) {
        // int integer=atoi(s.c_str());
        // return integer;
       int integer=0;
       int index=0;
       while(index<s.length() && s[index]==' '){
            index++;
       }
       int sign=1;
       if(index<s.length() && (s[index]=='-' || s[index]=='+')){
            sign=(s[index]=='-')?-1:1;
            index++;
       }
       while(index<s.length() && isdigit(s[index])){
            int digit=s[index]-'0';
            if (integer > (INT_MAX - digit) / 10) {
            return sign == -1 ? INT_MIN : INT_MAX;
        }
            integer=integer*10+(digit);
            index++;

       }
        
       return integer*sign;
    }
int main() {

return 0;
}