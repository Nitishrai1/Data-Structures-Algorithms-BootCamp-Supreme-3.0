// For each  algorightum

#include<bits/stdc++.h>
using namespace std;
void printDouble(int n){
    cout<<n*2<<" ";
}
bool checkeven(int a){
    return (a%2==0);
}
int main() {
    vector<int> arr(5);
    arr[0]=19;
    arr[1]=20;
    arr[2]=30;
    arr[3]=20;
    arr[4]=50;

    // for_each(arr.begin(),arr.end(),printDouble); //this will send all the element betweeen begin to end to the printDuble function 

    // auto it=find(arr.begin(),arr.end(),48); //returns an iterator which will point to 0 if not found else it will point to the element
    // cout<<*it<<endl;

    // auto it=find_if(arr.begin(),arr.end(),checkeven);
    // cout<<*it; this is used to find an element based on a funciton whihc take the number between begin to end

    
    // int target=20;
    // int cnt=count(arr.begin(),arr.end(),target);
    // cout<<target<<" occur "<<cnt<<" times";

    




return 0;
}