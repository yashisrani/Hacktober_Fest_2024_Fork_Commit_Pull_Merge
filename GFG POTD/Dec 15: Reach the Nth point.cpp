// There are N points on the road, you can step ahead by 1 or 2 . If you start from a point 0, and can only move from point i to point i+1 after taking a step of length one, find the number of ways you can reach at point N. 


#include<bits/stdc++.h>
using namespace std;

class Solution{
  int mod = 1e9+7;
	public:
	
	    int fib(int n , vector<int>&dp){
	        if(n == 0) return 1;
	        if(dp[n] != -1) return dp[n];
	        return dp[n] = (fib(n-1,dp)+fib(n-2,dp))%mod;
	    }
		int nthPoint(int n){
		    vector<int>dp(n+1, -1);
		    return fib(n , dp);
		    
		}
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
