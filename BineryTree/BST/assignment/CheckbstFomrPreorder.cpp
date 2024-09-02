#include<bits/stdc++.h>
using namespace std;

void build(std::vector<int> arr, int& index, int size, int lowerbound, int upperbound) {
    if (index >= size) return;
    if (arr[index] > lowerbound && arr[index] < upperbound)
    {
        // is case me ham node banate hai
        int val = arr[index++];
        build(arr, index, size, lowerbound, val);  // Left subtree
        build(arr, index, size, val, upperbound);  
    }// Right subtree
}

int Solution::solve(std::vector<int>& arr) {
    int index = 0;
    int size = arr.size();
    build(arr, index, size, INT_MIN, INT_MAX);  // Corrected bounds order
    return index == size;
}
int main() {

return 0;
}