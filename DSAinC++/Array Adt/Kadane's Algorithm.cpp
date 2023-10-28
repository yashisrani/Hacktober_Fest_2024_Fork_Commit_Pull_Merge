// Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.


#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
  
    long long maxSubarraySum(int arr[], int n){
       
        long long maxi = INT_MIN , prefix = 0;
        
        for(int i = 0 ; i < n ; i++){
            prefix +=arr[i];
            maxi = max(prefix , maxi);
            if(prefix < 0)
                prefix = 0;
        }
        return maxi;
    }
};

int main()
{
    int t,n;
    
    cin>>t; 
    while(t--) //while testcases exist
    {
        
        cin>>n; 
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; 
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

