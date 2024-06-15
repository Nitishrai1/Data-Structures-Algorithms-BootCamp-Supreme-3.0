// WAP to print the matrix in wave form
#include <iostream>
#include<vector>
using namespace std;
void waveprint(vector<vector<int>> v1){
  int row=v1.size();
  int c=v1[0].size();
  for(int col=0;col<c;col++){

    // codition if col even
    if((col & 1)==0){
      for(int i=0;i<row;i++){
        cout<<v1[i][col]<<" ";
      }

    }
    // if col is odd
    else{
      for(int i=row-1;i>=0;i--){
        cout<<v1[i][col]<<" ";
      }
    }
   

  }
  

}

int main() {
 vector<vector<int>> v1{
  {1,2,3,4},
  {5,6,7,8},
  {9,10,11,12},
  {13,14,15,16}
 };
 waveprint(v1);

  cout<<"All present";
  return 0;
}