#include <iostream>
#include <vector>

using namespace std;

int getMax(vector<int>& arr,int end){
  int idx=0;
  for(int i=1;i<end;i++){
    if(arr[i]>arr[idx]){
      idx=i;
    }

  }
  return idx;

}
vector<int> pancakeSort(vector<int>& arr ) 
{
  // ye approch simple hai max ele ka index nikalo 0 se waha to revers kar do fir pure arr ko reverse kar do taki max ele last me chal
  // jaye fir same karnge upto n-2 tak

  int n=arr.size();
  // max ele ka index le kar ao
  int maxi=getMax(arr,n);
  cout<<"max-> "<<maxi<<endl;
  return {};
}

int main() {
cout<<"Enter the number of ele in the array "<<endl;
  int n;cin>>n;
  cout<<endl;
  cout<<"Enter the ele in the array"<<endl;;
  vector<int> arr;
  for(int i=0;i<n;i++){
    int data;cin>>data;
    arr.push_back(data);
  }
  arr= pancakeSort(arr);
//   for(int i:arr){
//     cout<<i<<" ";
//   }
  return 0;
}