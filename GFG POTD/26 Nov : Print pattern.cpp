// Print a sequence of numbers starting with N, without using loop, where replace N with N - 5, until N > 0. After that replace N with N + 5 until N regains its initial value.


#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    vector<int> pattern(int N){
        
        int temp = N;
        vector<int>res;
        while(temp > 0){
            res.push_back(temp);
            temp = temp - 5;
        }
        while(temp <= N){
            res.push_back(temp);
            temp = temp + 5;
        }
        return res;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
