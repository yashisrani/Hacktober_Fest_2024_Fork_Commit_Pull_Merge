// Given an array a of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array.

#include <bits/stdc++.h>
using namespace std;


class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        map<int, int> mpp;
        vector<int> ans;
        for(long long x = 0; x < n; x++) mpp[arr[x]]++;
        for(auto z : mpp) {
            if(z.second > 1) ans.push_back(z.first);
        }
        if(ans.empty()) ans.push_back(-1);
        return ans;
    }
};


int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

