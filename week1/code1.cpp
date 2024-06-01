// Wap  a program to convert a decimal number to binery representation


#include<iostream>
using namespace std;

int binerytodecimal(int number){
    
    while(number>0){
        int bit=number%2;
        cout<<bit<<endl;
        number/=10;
    }
    return 0;
    
}


int main(){
    int number;
    cout<<"Enter the number";
    cin>>number;
    int res=binerytodecimal(number);
    
}