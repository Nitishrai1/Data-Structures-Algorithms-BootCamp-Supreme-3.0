#include<bits/stdc++.h>
using namespace std;
 void heapify(vector<int>& arr,int n,int i){
    int left=2*i+1;
    int right=2*i+2;
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
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        // simple hai merge karke new maheap bana lete hai
        vector<int> merge;
        merge.insert(merge.end(),a.begin(),a.end());
        merge.insert(merge.end(),b.begin(),b.end());
        // ab heapify kar dete hai
        // for(int i:merge){
        //     cout<<i<<" ";
        // }
        int size=merge.size();
        for(int i=(size)/2-1;i>=0;i--){
            heapify(merge,size,i);
        }
        return merge;
        
    }
int main() {

return 0;
}