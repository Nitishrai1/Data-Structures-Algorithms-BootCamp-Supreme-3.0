// WAP to move all the -ve number to the left of the array
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void movenegativetoleft(int  arr[],int n){
     int low=0;
    int high=n-1;
    while(low<=high){
        if(arr[low]<0){
            low++;
        }
        else if(arr[high]>=0){
            high--;
        }
        else{ 
            swap(arr[low],arr[high]);
            low++;high--;

        }
        
    }
}
int main() {
    // Write C++ code here
   
    int arr[]={-2,4,8,-1,7};
    int n=sizeof(arr)/sizeof(int);
    movenegativetoleft(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}