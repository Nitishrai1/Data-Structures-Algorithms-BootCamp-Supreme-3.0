// wap to perform merge sort on a array
#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& arr,int st,int end,int mid){
    int leftLength=mid-st+1;
    int rightlength=end-mid;
    // create two array left part and right part

    int *leftarr=new int[leftLength];
    int *rightarr=new int[rightlength];

    // copy the element in left and right array

    int index=st;
    // left array
    for(int i=0;i<leftLength;i++){
        leftarr[i]=arr[index];
        index++;
    }
    // right array
    index=mid+1;
    for(int i=0;i<rightlength;i++){
        rightarr[i]=arr[index];
        index++;
    }

    // now i have to perform the mergeing between two array
    int i=0,j=0;
    int start=st;
    while(i<leftLength && j<rightlength){
        if(leftarr[i]<=rightarr[j]){
            arr[start]=leftarr[i];
            i++;start++;
        }
        else{
            arr[start]=rightarr[j];
            j++;
            start++;
        }
    }
    // left array remaing part
    while(i<leftLength){
        arr[start]=leftarr[i];
        start++;
        i++;
    }
    // right array remaing part
    while(j<rightlength){
        arr[start]=rightarr[j];
        start++;
        j++;
    }
     delete[] leftarr;
  delete[] rightarr;
}


void mergeSort(vector<int>& arr,int st,int end){
    // base cases if st>=end
    if(st>=end)return;
    int mid=st+(end-st)/2;
    // left part of array
    mergeSort(arr,st,mid);
    // right part of array
    mergeSort(arr,mid+1,end);

    // merge
    merge(arr,st,end,mid);

}
int main() {
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(70);
    arr.push_back(130);
    arr.push_back(0);
    arr.push_back(23);
    arr.push_back(213);
    arr.push_back(94);
    arr.push_back(100);
    arr.push_back(101);
    int size=arr.size();
    mergeSort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}