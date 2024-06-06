// WAP to return true if the number is member of fibonacci series else false
#include<bits/stdc++.h>
using namespace std;
bool checkMember(int n){
    int f1=0,f2=1;
    if(n==0||n==1){
        return true;
    }
    
    else{
        int temp;
        while (true)
        {
            temp=f1+f2;
            f1=f2;
            f2=temp;
            
            if(temp==n){
                return true;
            }
            else if(temp>n){
                return false;
            }
            /* code */
        }
        
    }


}
int main() {
    int n;cin>>n;
    if(checkMember(n)){
        cout<<"True";
    }else cout<<"False";

return 0;
}