#include <bits/stdc++.h>
using namespace std;

bool IsPossible(vector<int> rank, int TP, int threshold) {
    int currP = 0;
    for (int i = 0; i < rank.size(); i++) {
        int j = 1;
        int timetaken = 0;
        int R = rank[i];
        while (true) {
            if (timetaken + j * R <= threshold) {
                ++currP;
                timetaken += j * R;
                ++j;
            } else {
                break;
            }
        }
        if (currP >= TP) return true;
    }
    return false;
}

int IntimeToMakeParata(vector<int> v1, int TotalParata) {
    int st = 0;
    int ans = -1;
    int maxi = *max_element(v1.begin(), v1.end());
    int end = maxi * (TotalParata * (TotalParata + 1) / 2);
    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (IsPossible(v1, TotalParata, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int nP, nC;
        cin >> nP >> nC;
        vector<int> CookRank;
        while (nC--) {
            int R;
            cin >> R;
            CookRank.push_back(R);
        }
        cout << IntimeToMakeParata(CookRank, nP) << endl;
    }
    return 0;
}
