// leetcode Nqueens 2
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    unordered_map<int,bool> rowCheck;
    unordered_map<int,bool> lowerdiagonalCheck;
    unordered_map<int,bool>  upperdiagonalCheck;

    void storeSolution(vector<vector<char>>& board,vector<vector<string>>& ans,int n){
        vector<string> temp;
        for(int i=0;i<n;i++){
            string empty="";
            for(int j=0;j<n;j++){
                empty.push_back(board[i][j]);
            }
            temp.push_back(empty);
        }
        ans.push_back(temp);
    }
    bool isSafe(int row,int col,vector<vector<char>>& board){
        // check karna hia safe hai ki nahi
        // check for row
        if(rowCheck[row]==true)return false;
        // check for upper diagonal
        if(upperdiagonalCheck[(row-col) ]==true) return false;
        // check lower diagonal
        if(lowerdiagonalCheck[row+col]==true)return false;

        return true;


    }
    void solve(int n,vector<vector<char>>& board,vector<vector<string>>& ans
    ,int col){
        // base case jab col out of v=bound chala jaye
        if(col>=n){
            // all queen are placed 
            // store baord aragnement in ans
            storeSolution(board,ans,n);
            return;
        }
        // yek case ham dekh lete hai baki recursion sambhal lega
        // mere pass col ka index hai uss column me konsi row me queen ko place karna hha
        // vo yaha decide hoga
        for(int row=0;row<n;row++){
            // hr row par queen ko place karke dekh lete hai
            // par pahle safe check kar lena
            if(isSafe(row,col,board)){
                board[row][col]='Q';
                rowCheck[row]=true;
                upperdiagonalCheck[row-col]=true;
                lowerdiagonalCheck[row+col]=true;
                // baki recursion sambhal lega
                solve(n,board,ans,col+1);
                // backtark karte samaye remove karte jana iska matlab hai ki aragment nahi mil raha sahi wala
                board[row][col]='.';
                rowCheck[row]=false;
                upperdiagonalCheck[row-col]=false;
                lowerdiagonalCheck[row+col]=false;

            }
        }

    }
    int totalNQueens(int n) {
         vector<vector<char>> board(n,vector<char>(n,'.'));
        vector<vector<string>> ans;
        int col=0; //start placing queen oth column
        // int row=0;
        solve(n,board,ans,col);
        return ans.size();

        
    }
};
int main() {

return 0;
}