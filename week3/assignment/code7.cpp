// WAP to find the missing number in arra containg duplicates
#include <iostream>
#include<vector>
using namespace std;

int main() {
  vector<int> v1;
  int n;cin>>n;
  for(int i=0;i<n;i++){
     int data;cin>>data;
    v1.push_back(data);
  }
//   Indexing method
//   for(int i=0;i<n;i++){
//    int index=abs(v1[i]);
//    if(v1[index-1]>0){
//     v1[index-1]*=-1;
//    }
//   }

// sorting and swapping methid
    int i=0;
    while(i<n){
        int index=v1[i]-1;
        if(v1[i]!=v1[index]){
            swap(v1[i],v1[index]);
        }
        else{
            ++i;

        }
    }
//   for(int i=0;i<n;i++){
//     if(v1[i]>0){
//       cout<<i+1<<" ";
//     }
//   }
    for(int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }cout<<endl;
    for (int i = 0; i < n; i++)
    {
        if(v1[i]!=i+1){
            cout<<i+1<<" ";
        }
        /* code */
    }
    
  return 0;
}