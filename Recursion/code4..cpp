// wap a recusrion functrion to print th odd number

#include<bits/stdc++.h>
using namespace std;
void printOdd(int arr[],int st,int end){
    if(st==end){
        return;
    }
    if(arr[st]&1){
        cout<<arr[st]<<" ";
    }
    printOdd(arr,st+1,end);
}
int main() {
    int arr[]={1,2,3,4,5,6,7,9};
    printOdd(arr,0,8);

return 0;
}