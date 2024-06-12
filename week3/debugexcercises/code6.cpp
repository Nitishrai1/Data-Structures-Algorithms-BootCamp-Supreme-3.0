// WAP to sort 0s 1s
#include<bits/stdc++.h>
using namespace std;
void sort0sand1s(int input[], int size){
	int nextZero = 0;
	for(int i=0; i<size; i++){
		if(input[i] == 0){
			int temp = input[nextZero];
			input[nextZero] = input[i];
			input[i] = temp;
			nextZero++;
		}
	}
}
int main() {
    int n, sum=0;
    cin >> n;
    int input[n];
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
    sort0sand1s(input,n);
    for(int i:input){
        cout<<i<<" ";
    }

return 0;
}