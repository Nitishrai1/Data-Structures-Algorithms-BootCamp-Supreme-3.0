// wap to print all the list of subarray whose sum is equal to k
#include<bits/stdc++.h>
using namespace std;
void pairSumToX(int input[], int size, int x){
	int pairs = 0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			if(input[i] + input[j] == x){
                cout<<i<<" "<<j;
            }
            
		}cout<<endl;
	}
	
}
int main() {
    int n, sum=0;
    cin >> n;
    int input[n];
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
    int key;cin>>key;
    pairSumToX(input,n,key);
    

return 0;
}