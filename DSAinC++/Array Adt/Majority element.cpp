// Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears strictly more than N/2 times in the array.



#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
     
    int majorityElement(int nums[], int n)
    {
        
        // your code here
        int candidate , cnt = 0 ;

        for(int i = 0 ; i < n ; i++){
            if(cnt == 0){
                cnt=1;
                candidate = nums[i];
            }else{
                if(candidate == nums[i]) cnt++;
                else cnt--;
            }
        }
        cnt = 0;
        for(int i = 0 ; i < n ;i++)
        if(nums[i] == candidate)cnt++;
        
        if(cnt > n/2)
            return candidate;
        else 
            return -1;
        
    }
};

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
