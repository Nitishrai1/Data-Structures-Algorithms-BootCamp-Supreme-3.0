// Wap  a program to convert a decimal number to binery representation
#include<iostream>
#include<cmath>
using namespace std;

int decimaltobinery(int number){
    int binerynumber=0;
    int i=0;

    // by division method
    // while(number>0){
    //     int bit=number%2;
    //     binerynumber+=bit*pow(10,i++);
    //     number/=2;

    // }

    // doing with the and operator
    while (number>0)
    {
        int bit=number&1;
        binerynumber+=bit*pow(10,i++);
        /* code */
        number=number>>1;
    }
    
    return binerynumber;
    
    
    
}


int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    int res=decimaltobinery(number);
    cout<<res<<endl;
    
}