// Given a number N and a bit number K, check if Kth index bit of N is set or not. A bit is called set if it is 1. Position of set bit '1' should be indexed starting with 0 from LSB side in binary representation of the number.


#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:

    bool checkKthBit(int n, int k)
    {
      
        return n & (1<<k);
    }
};

int main()
{
	int t;
	cin>>t;//taking testcases
	while(t--)
	{
	    long long n;
	    cin>>n;
	    int k;
	    cin>>k;
	    Solution obj;
	    if(obj.checkKthBit(n, k))
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}
