#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;
int main() {
    vector<int> arr(5);
    arr[0]=10;
    arr[1]=10;
    arr[2]=10;
    arr[3]=10;
    arr[4]=10;

    // accumulate
    int sum=accumulate(arr.begin(),arr.end(),0);

    vector<int> arr2(5);
    arr2[0]=2;
    arr2[1]=3;
    arr2[2]=1;
    arr2[3]=4;
    arr2[4]=7;

    int ans2=inner_product(arr.begin(),arr.end(),arr2.begin(),0); //this wil take the product of the first array element with that of the second array element acoording to thier index




return 0;
}