// Given an array of integers. Find if there is a subarray (of size at-least one) with 0 sum. You just need to return true/false depending upon whether there is a subarray present with 0-sum or not



#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
   
    bool subArrayExists(int arr[], int n)
    {
        long long sum = 0;
        map<int , int>mp;
        mp[0] = 1;
        for(int i = 0 ; i  < n ; i++){
            sum += arr[i];
            mp[sum]++;
            if(mp[sum] > 1) return 1;
        }
        return 0;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
