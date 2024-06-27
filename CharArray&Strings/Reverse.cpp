#include<bits/stdc++.h>
using namespace std;
int getLength(char arr[],int n){
    int cnt=0;
    for(int i=0;i<n;i++){
       if(arr[i]=='\0') break;
       else cnt++;
    }
    return cnt;

}
bool palindrome(char arr[],int st,int end){
    while(st<end){
        if(arr[st++]!=arr[end--]){
            return false;
        }
    }
    return true;

}
int main() {
    // char arr[10];
    // cin>>arr;cout<<arr<<endl;
    // int len=getLength(arr,9);

    // int l=0,end=len-1;
    // while(l<end){
    //     swap(arr[l],arr[end]);
    //     l++,end--;
    // }
    // cout<<arr;
    char arr2[10];

    cout<<"\n Enter the string to check for palindrome: ";cin>>arr2;
    int st=0;
    int len2=getLength(arr2,9);
    int e=len2-1;
    if(palindrome(arr2,st,e)){
        cout<<"The string is a palindrom";
    }else{
        cout<<"The string is not a palindrome";
    }

return 0;
}