#include<bits/stdc++.h>
using namespace std;
bool Binerysearch(vector<int> v1,int st,int end,int target){
    while(st<=end){
        int mid=st+(end-st)/2;
        if(v1[mid]==target){
            return true;
        }
        else if(target>v1[mid]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return false;
}
bool exponentialBS(vector<int> nums,int target){
    if(nums[0]==target) return true;
    int i=1;
    while(i<nums.size() && nums[i]<=target){
        i=i*2;
    }
    int st=i/2;
    int n=nums.size();
    int end=min(i,n-1);
    bool ans= Binerysearch(nums,st,end,target);
    return ans;

}
int main() {
    vector<int> v1={1,2,3,4,5,6,7,8,9,0,55,66,87,90,100,333};
    bool ans=exponentialBS(v1,66);
    if(ans) cout<<"66 is present in the array";
    else{
        cout<<"Not present";
    }

return 0;
}