#include<bits/stdc++.h>
using namespace std;

// brute force
 bool check(vector<int> arr){
        int zerocnt=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                zerocnt++;
            }
        }
        return zerocnt==0;
    }
    int celebrity(vector<vector<int> >& mat) {
        // code here
        
        int row=mat.size();
        // sabse pahle wo row nikalo jisme sare element zero ho
        for(int i=0;i<row;i++){
            if(check(mat[i])){
                // if true matlab ye wala row me sare zero hai 
                // to is row ke correcponding sare col element check karo
                bool flag=true;
                for(int j=0;j<row;j++){
                    if(j!=i && mat[j][i]!=1){
                        flag=false;
                    }
                }
                if(flag){
                    return i;
                }
                
            }
        }
        return -1;
    }




// optimal
 int celebrity(vector<vector<int> >& mat) {
        // code here
        stack<int> st;
        for(int i=0;i<mat.size();i++){
            st.push(i);
        }
        
        // ab sara row a bgya hai stack me
        while(st.size()!=1){
            int A=st.top();
            st.pop();
            int B=st.top();
            st.pop();
            if(mat[A][B]){
                // a pakka nah hai b 
                st.push(B);
            }else if(mat[B][A]){
                st.push(A);
            }
            
        }
        
        // ab size one hai sara row col check kar lo
        int index=st.top();
        
        for(int i=0;i<mat.size();i++){
            if(mat[index][i]==1){
                return -1;
            }
            
        }
        bool flag=true;
        // col check kr lo
        for(int i=0;i<mat.size();i++){
            if(i!=index && mat[i][index]==0){
                flag=false;
            }
            
        }
        if(flag){
            return index;
        }
        return -1;
        
    }
int main() {

return 0;
}