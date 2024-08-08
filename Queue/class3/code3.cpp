#include<bits/stdc++.h>
using namespace std;
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    deque<int> q;  // Deque to store indices of useful elements in the current window
    vector<int> ans;  // Result vector to store maximums of each window

    for (int i = 0; i < nums.size(); i++) {
        // Remove indices that are out of the current window
        if (!q.empty() && q.front() < i - k + 1) {
            q.pop_front();
        }

        // Remove elements that are smaller than the current element
        while (!q.empty() && nums[q.back()] < nums[i]) {
            q.pop_back();
        }

        // Add the current element's index to the deque
        q.push_back(i);

        // The first window is only filled after i >= k - 1
        if (i >= k - 1) {
            ans.push_back(nums[q.front()]);
        }
    }

    return ans;
}
int main() {

return 0;
}