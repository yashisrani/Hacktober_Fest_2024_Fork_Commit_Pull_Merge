// Given a positive integer N, return the Nth row of pascal's triangle. Pascal's triangle is a triangular array of the binomial coefficients formed by summing up the elements of previous row. The elements can be large so return it modulo 109 + 7.


#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int mod = 1e9+7;
    vector<long long> nthRowOfPascalTriangle(int n) {
        vector<vector<long long>>res(n);
        for(int i=0;i<n;i++) {
            res[i].resize(i+1);
            res[i][0] = res[i][i] = 1;
            
            for(int j=1;j<i;j++) {
                res[i][j] = (res[i-1][j-1] + res[i-1][j])%mod;
            }
        }
        return res[n-1];
    }
};

void printAns(vector<long long> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}
