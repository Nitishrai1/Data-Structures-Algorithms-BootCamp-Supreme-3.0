// Debug the code. List all triplets in array that sums to X.
#include<bits/stdc++.h>
using namespace std;
int tripletSumToX(int input[], int size, int x){
	int triplets = 0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			for(int k=j+1; k<size; k++){
				if(input[i] + input[j] + input[k] == x) triplets++;
			}
		}
	}
	return triplets;
}
int main() {
    int n, sum=0;
    cin >> n;
    int input[n];
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
    int key;cin>>key;
    cout<<tripletSumToX(input,n,key);

return 0;
}