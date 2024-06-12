// wap to swap the alternate indexex
#include<bits/stdc++.h>
using namespace std;
void swapAlternate(int arr[],int size){
    for(int i=0;i<size-1;i+=2){
        int temp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}
int main() {
    int n, sum=0;
    cin >> n;
    int input[n];
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
    swapAlternate(input,n);
    for(int I:input){
        cout<<I<<" ";
    }

return 0;
}