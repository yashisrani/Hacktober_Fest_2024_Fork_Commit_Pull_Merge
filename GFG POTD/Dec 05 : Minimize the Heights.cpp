// Given an array arr[] denoting heights of N towers and a positive integer K.

// For each tower, you must perform exactly one of the following operations exactly once.

  // Increase the height of the tower by K
  // Decrease the height of the tower by K
// Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.



#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr + n);
        int minDiff = arr[n - 1] - arr[0];
        for (int j = 1; j < n; j++) {
            if (arr[j] - k < 0) continue;
            minDiff = min(minDiff, max(arr[n - 1] - k, arr[j - 1] + k) - min(arr[0] + k, arr[j] - k));
        }
        return minDiff;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
