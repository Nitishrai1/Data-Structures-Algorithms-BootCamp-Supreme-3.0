#include<bits/stdc++.h>
using namespace std;
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                 
    deque<long long int> q;
    vector<long long> ans;

    // Process the first window of size K
    for (int i = 0; i < K; i++) {
        if (A[i] < 0) {
            q.push_back(i);
        }
    }

//   ab check kar lo first window ka ans store kar lete hai
    if (!q.empty()) {
        ans.push_back(A[q.front()]);
    } else {
        ans.push_back(0);
    }

//   remaing window process kar lete hai
    for (int i = K; i < N; i++) {
       
        if (!q.empty() &&  q.front() < i-K+1) {
            q.pop_front();
        }

     
        if (A[i] < 0) {
            q.push_back(i);
        }

     
        if (!q.empty()) {
            ans.push_back(A[q.front()]);
        } else {
            ans.push_back(0);
        }
    }

    return ans;
                                                 
 }
int main() {

return 0;
}