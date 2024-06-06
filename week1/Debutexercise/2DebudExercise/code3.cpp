// wap to print all prime number that lie in the range 2 to N (both inclusive)
#include<iostream>
using namespace std;

int main(){
    
    int n;cin>>n;
    for(int i=2;i<=n;i++){
        int flag=0;
        for(int j=2;j<i/2;j++){
            if(i%j==0){
                flag+=1;
            }

        }
        if(flag!=1){
            cout<<i<<endl;
        }
    }
    return 0;
}