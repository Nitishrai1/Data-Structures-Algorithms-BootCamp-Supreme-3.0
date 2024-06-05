
// Wap to convert a binery digit to decimal number

#include<bits/stdc++.h>
using namespace std;

int binerytodecimal(int bits){
    int decimal=0;
    int i=0;
    while (bits>0)
    {
        int bit=bits%10;
        decimal+=bit*pow(2,i++);
        bits/=10;

        /* code */
    }
    // return decimal;
// this is more accurate method when string is given for long binery number
        // int i=0;
        // int decimal=0;
        // int length=str.length();
        // for(int i=0;i<length;i++){
        //     int bit=str[length-1-i]-'0';
        //     decimal+=bit*(1<<i);
        // }
        // return decimal;
    
}

int main() {
    int bit;
    cout<<"Enter the bits: ";cin>>bit;
    cout<<"Decimal form of binery number is: "<<binerytodecimal(bit);


return 0;
}