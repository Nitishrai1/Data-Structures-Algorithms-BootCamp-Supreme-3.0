// wap a funciton to check if the arrray is sorted or not using recursion
#include<bits/stdc++.h>
using namespace std;
bool checkSorted(vector<int> arr,int i){
    if(i>=arr.size()-1){
        return true;
    }
    if(arr[i]>arr[i+1])return false;
    return checkSorted(arr,i+1);
}

bool checkSortedDecendingOrder(vector<int> arr,int index){
    if(index>=arr.size()-1)return true;
    if(arr[index]<arr[index+1])return false;
    return checkSortedDecendingOrder(arr,index+1);
}
int main() {
    vector<int> arr;
    // arr.push_back(2);
    // arr.push_back(99);
    // arr.push_back(221);
    // arr.push_back(21);
    // arr.push_back(25);
    // arr.push_back(89);
    // arr.push_back(22);
    // arr.push_back(12);
    // arr.push_back(32);
    // sort(arr.begin(),arr.end());
    arr.push_back(19);
    arr.push_back(12);
    arr.push_back(11);
    arr.push_back(10);
    arr.push_back(1);


    // bool ans=checkSorted(arr,0);
    // if(ans) cout<<"Array is sorted";
    // else cout<<"Not sorted";

    bool ans=checkSortedDecendingOrder(arr,0);
    if(ans) cout<<"Array is sorted";
    else cout<<"Not sorted";



return 0;
}