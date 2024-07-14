// 1981. Minimize the Difference Between Target and Chosen Elements
// Attempted
// Medium
// Topics
// Companies
// Hint
// You are given an m x n integer matrix mat and an integer target.

// Choose one integer from each row in the matrix such that the absolute difference between target and the sum of the chosen elements is minimized.

// Return the minimum absolute difference.

// The absolute difference between two numbers a and b is the absolute value of a - b.

 #include<bits/stdc++.h>
 using namespace std;
   void solve(vector<vector<int>>& mat,int target,int sum,int row,int& mini){
        // base case agar row n-1 ho gy tab
        if(row==mat.size()){
            int dif=abs(target-sum);
            mini=min(mini,dif);
            return;
        }
        // loop chalao fo all col
        for(int col=0;col<mat[0].size();col++){
            solve(mat,target,sum+mat[row][col],row+1,mini);
        }
    }
    int minimizeTheDifference(vector<vector<int>>& mat, int target) {
        int row=0;
        int mini=INT_MAX;
        solve(mat,target,0,row,mini);
        return mini;
        
    }
 int main() {
 
 return 0;
 }