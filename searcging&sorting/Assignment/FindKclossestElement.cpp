// // findKclossestElMENT
// 658. Find K Closest Elements
// Solved
// Medium
// Topics
// Companies
// Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.

// An integer a is closer to x than an integer b if:

// |a - x| < |b - x|, or
// |a - x| == |b - x| and a < b
 

// Example 1:

// Input: arr = [1,2,3,4,5], k = 4, x = 3
// Output: [1,2,3,4]
// Example 2:

// Input: arr = [1,2,3,4,5], k = 4, x = -1
// Output: [1,2,3,4]
 

// // Constraints:

// // 1 <= k <= arr.length
// #include<bits/stdc++.h>
// using namespace std;
// vector<pair<int, int>> diffArr{
        
//         // Store the difference and the element as pairs
//     //     for (int num : arr) {
//     //         diffArr.push_back({abs(num - x), num});
//     //     }
        
//     //     // Sort based on the difference (first element of the pair)
//     //     sort(diffArr.begin(), diffArr.end());
        
//     //     // Extract the k closest elements
//     //     vector<int> result;
//     //     for (int i = 0; i < k; ++i) {
//     //         result.push_back(diffArr[i].second);
//     //     }
        
//     //     // Sort the result before returning
//     //     sort(result.begin(), result.end());
//     //     return result;
//     // }
// 		// another approch using binery search to take only k number of number which are closer to x in term of diff
// 		  int low=0;
//         int n=arr.size();
//         int high=n-1;

//         while(high-low>=k){
//             if(abs(arr[low]-x)>abs(arr[high]-x)){
//                 low++;
//             }
//             else{
//                 high--;
//             }
//         }
//         vector<int > ans;
//         int st=low;
//         int end=high;
//         while(st<=end){
//             ans.push_back(arr[st++]);
//         }
//         sort(ans.begin(),ans.end());
//         return ans;
//         }
    int bs(vector<int> arr,int target){
        int st=0;
        int end=arr.size()-1;
        while(st<=end){
            int mid=st+((end-st)>>1);
            if(arr[mid]==target) return mid;
            else if(target>arr[mid]) st=mid+1;
            else end=mid-1;
        }
        return -1;
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int low=0;
        int n=arr.size();
        int high=n-1;

        while(high-low>=k){
            if(abs(arr[low]-x)>abs(arr[high]-x)){
                low++;
            }
            else{
                high--;
            }
        }
        vector<int > ans;
        int st=low;
        int end=high;
        while(st<=end){
            ans.push_back(arr[st++]);
        }
        sort(ans.begin(),ans.end());
        return ans;

    }
		
int main() {

return 0;
}