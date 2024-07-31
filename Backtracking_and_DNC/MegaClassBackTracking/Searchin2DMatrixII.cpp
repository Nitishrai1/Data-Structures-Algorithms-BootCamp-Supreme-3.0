// Search in 2D matrix 2
#include<bits/stdc++.h>
using namespace std;


//   bool find(vector<int> arr,int target, int index){
//         if(index==arr.size()){
//             return false;
//         }
//         // yek case ham dekhe lete hia
//         if(arr[index]==target)return true;
//         return find(arr,target,index+1);

//     }
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row=matrix.size();
//         int col=matrix[0].size();
//         for(int i=0;i<row;i++){
//         //    check karo is row me lie karega kya
//             if(target>= matrix[i][0] && target<=matrix[i][col-1]){
//                 if(find(matrix[i],target,0)){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }     TLE dega binery search se karo

// Optimal
//  bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row=matrix.size();
//         int col=matrix[0].size();

//         if(row==0)return false; //yani k9i koi data hi nahi hai

//         int r=0;
//         int c=col-1;
//         while(r<row && c>=0){
//             if(matrix[r][c]==target)return true;
//             if(target>matrix[r][c]) r++;
//             else c--;
//         }
//         return false;
        
//     }
int main() {

return 0;
}