// WAP to convert alowercase to uppercase and vice vers
#include<bits/stdc++.h>
using namespace std;
void UpperTol(char arr[], int size){
    for(int i=0;i<size;i++){
         if(arr[i]>='A' && arr[i]<='Z'){
            arr[i]=arr[i]-'A'+'a';
        }

    }
   
}
void LowToU(char arr[],int size){
    for(int i=0;i<size;i++){
         if(arr[i]>='a' && arr[i]<='z'){
            arr[i]=arr[i]-'a'+'A';
        }

    }
}
int main() {

    char arr[100];
    cin.getline(arr,100);
    UpperTol(arr,100);cout<<arr<<endl;

    LowToU(arr,100);cout<<arr;


return 0;
}