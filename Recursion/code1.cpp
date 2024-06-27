// Print the element of the array using recursion 
#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int st,int size){
    if(st>size-1){
        return;
    }
    cout<<arr[st]<<" ";
    print(arr,st+1,size);

}
int main() {
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        /* code */
    }
    print(arr,0,n);


    
return 0;
}