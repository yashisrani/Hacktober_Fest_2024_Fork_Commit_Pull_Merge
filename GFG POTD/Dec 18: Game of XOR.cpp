// Given an array A of size N. The value of an array is denoted by the bit-wise XOR of all elements it contains. Find the bit-wise XOR of the values of all subarrays of A.


#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int gameOfXor(int N , int A[]) {
        if((N&1)==0) return 0;
        int res=0;
        for(int i=0;i<N;i+=2){
            res^=A[i];
        } 
        return res;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        for(int i=0 ; i<N ; i++)
            cin>>A[i];
        Solution ob;
        cout << ob.gameOfXor(N,A) << endl;
    }
    return 0;
}
