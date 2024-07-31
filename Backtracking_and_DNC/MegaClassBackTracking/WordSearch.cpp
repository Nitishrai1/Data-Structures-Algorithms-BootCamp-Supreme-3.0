// // leetcode 79 word search
// #include<bits/stdc++.h>
// using namespace std;

//  bool solve(int index,vector<vector<char>>& board,int row,int col,string& str){
//         // base case banega
//         if(index==str.length())return true;

//         if(row>= board.size() || row<0  || col>=board[0].size() || col<0 || board[row][col]!=str[index] || board[row][col]=='.') return false;

        
//         // yaha par a gye hai to matlab match hua hai
//         char temp=board[row][col];
//         board[row][col]='.';
//         // visited mark kar do
//         bool up=solve(index+1,board,row-1,col,str);
//         bool down=solve(index+1,board,row+1,col,str);
//         // ya to down jao
//         bool right=solve(index+1,board,row,col+1,str);
//         // ya right jao 
//         bool left=solve(index+1,board,row,col-1,str);

//         board[row][col]=temp;

//         // left jao
//         return up||down||right||left;


        

//         // Re call
        

//         // visited back trak kar do
        
//     }

//     bool exist(vector<vector<char>>& board, string word) {
//         for(int i=0;i<board.size();i++){
//             for(int j=0;j<board[0].size();j++){
//                 if(solve(0,board,i,j,word)){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// int main() {

// return 0;
// }