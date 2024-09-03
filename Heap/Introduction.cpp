// Heap is a complete binery tree which follow the heap order property
// A complete binery tree is a tree which have completly filled child 
// nodes always added from left
// Types of heaps
// Mac heap: in this type of heap the root element is alwaus greater than its children node
// MIn heap : in this tupes of heap the root element is smaller then the children node


#include<bits/stdc++.h>
using namespace std;
class Heap{
    public:
    int arr[100];
    int size=0;
    void insert(int val){
        size++;
        int index=size;
        arr[size]=val;
        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                // isks matlba hai swap kar do
                swap(arr[parent],arr[index]);
                index=parent;
            }else{
                return;
            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    void deleteinHeap(){
        // deleteion me root node delete karte hai to yek kam karo last wala node le kar ao use root node me insert kar do fir size decreaent then place the root node at its correct postion
        if(size==0){
            // iska matlab hia ki heap me koi element hi nahi hai 
            cout<<"No element to delete";
            return;
        } 
        // sabse pahle last node ke la kar root node me insert kar do
        arr[1]=arr[size];
        size--;
        int i=1;
       
        while (i<=size)
        {
            int leftindex=2*i;
            int rightindex=2*i+1;
            int largest=i;
            // check kar lo kya left child small hai root se
            if(leftindex<=size && arr[leftindex]>arr[largest]){
                largest=leftindex;

            }
            if(rightindex<=size && arr[rightindex]> arr[largest]){
                largest=rightindex;
            }
            if(largest!=i){
                swap(arr[i],arr[largest]);
                i=largest;
            }else{
                break;
            }
        }
        

      
    }
};
void heapify(int arr[],int n,int i){
    int left=2*i;
    int right=2*i+1;
    int largest=i;
    if(left<n && arr[left]>arr[largest]){
        // iska matlab hai ki max heap nahi hai
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        i=largest;
        heapify(arr,n,i);
    }else{
        return ;
    }

}

int main() {
    Heap h;
    int data;
    // while(cin>>data){
    //    if(data==-1)break;
    //     h.insert(data);
    // }
    // for(int i=0;i<6;i++){
    //     int data;cin>>data;
    //     h.insert(data);
    // }
    // h.print();
    cout<<endl;
    // h.deleteinHeap();
    int arr[6]={-1,50,60,40,52,30};
    int n=5;
    for(int i=5/2;i>0;i--){
        heapify(arr,6,i);
    }
    for(int i=1;i<6;i++){
        cout<<arr[i]<<" ";
    }


return 0;
}