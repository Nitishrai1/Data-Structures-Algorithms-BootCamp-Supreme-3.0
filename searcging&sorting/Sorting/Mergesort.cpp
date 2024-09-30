// merge sort
#include<iostream>
using namespace std;

 void merge(int arr[], int l, int mid, int r)
    {
        int leftlength=mid-l+1;
        int rightlength=r-mid;
        // create both array for left part and right part
        int* leftarr=new int[leftlength];
        int* rightarr=new int[rightlength];
        // copy the element in the left and right arrray
        int index=l;
        for(int i=0;i<leftlength;i++){
            leftarr[i]=arr[index];
            index++;
        }
        // right array
        index=mid+1;
        for(int i=0;i<rightlength;i++){
            rightarr[i]=arr[index];
            index++;
        }
        
        // ab merge karna hai dono array ko
        int i=0,j=0;
        int st=l;
        while(i<leftlength && j<rightlength){
            if(leftarr[i]<rightarr[j]){
                arr[st]=leftarr[i];
                st++;
                i++;
            }else{
                arr[st]=rightarr[j];
                st++;
                j++;
            }
        }
        // bacha hua part copy kar do
        while(i<leftlength){
            arr[st]=leftarr[i];
            i++;
            st++;
        }
        // right arrr
         while(j<rightlength){
            arr[st]=rightarr[j];
            j++;
            st++;
        }
        // delete kar do temp array ko
        delete[] leftarr;
        delete[] rightarr;
    }

    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r){
            return;
        }
        int mid=l+(r-l)/2;
        // left me divide karo
        mergeSort(arr,l,mid);
        // right me divide karo
        mergeSort(arr,mid+1,r);
        
        // merge karo do dono array
        merge(arr,l,mid,r);
    }
int main(){
}