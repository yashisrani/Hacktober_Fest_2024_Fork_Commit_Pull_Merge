// Given a non-empty array nums[] of integers of length N, find the top k elements which have the highest frequency in the array. If two numbers have same frequencies, then the larger number should be given more preference


#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
       
        int n = nums.size();
        unordered_map<int , int>mp;
        for(int i = 0 ; i < n ; i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int, int>>pq;
        for(auto x : mp){
            pq.push({x.second, x.first});
        }
        vector<int>v;
        for(int i = 0 ; i < k ; i++){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << endl;
    }
    return 0;
}
