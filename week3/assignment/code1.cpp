// KEY PAIR OT TOW SUM
#include<bits/stdc++.h>
using namespace std;
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    if(n==0)return x==arr[0];
	   sort(arr,arr+n);
	   int low=0;
	   int high=n-1;
	   while(low<high){
	       if(arr[low]+arr[high]==x)return true;
	       else if(arr[low]+arr[high]>x) high--;
	       else low++;
	   }
	   return false;
	}
int main() {
    int n, sum=0;
    cin >> n;
    int input[n];
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
    int key;cin>>key;
    cout<<hasArrayTwoCandidates(input,n,key);

return 0;
}