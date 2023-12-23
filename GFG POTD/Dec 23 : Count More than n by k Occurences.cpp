// Given an array arr of size N and an element k. The task is to find the count of elements in the array that appear more than n/k times.



#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int countOccurence(int arr[], int n, int k) {
        int cnt = abs(n/k);
        int res = 0;
        unordered_map<int , int>mp;
        for(int i = 0 ;i < n ; i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
            if(it.second > cnt){
                res++;
            }
        }
        return res;     
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) cin >> arr[i];
        int k;
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}
