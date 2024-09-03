#include<bits/stdc++.h>
using namespace std;
// class Heap{
//     public:
//     int arr[100];
//     int size=0;
//     void insert(int val){
//         size++;
//         arr[size]=val;
//     }
// };

void heapify(vector<int>& arr,int n,int i){
    // zero based indexing hai 
   
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        i=largest; //next node 
        heapify(arr,n,i);
    }else{
        return;
    }

}

void heapsort(vector<int>& arr, int n) {
  
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr,n, i);
    }

    // sorting the array 
    for (int t = n - 1; t >= 0; t--) {
        swap(arr[0], arr[t]);
        heapify(arr,t, 0);
    }
}
int main() {

    vector<int> arr;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int data;cin>>data;
        arr.push_back(data);
    }
    // heapy ke liye n/2 element se karte hai
    int size=arr.size();
   

    heapsort(arr,size);
    for(int i:arr){
        cout<<i<<" ";
    }


return 0;
}