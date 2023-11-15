// Given a pair of strings of equal lengths, Geek wants to find the better string. The better string is the string having more number of distinct subsequences.
If both the strings have equal count of distinct subsequence then return str1.


#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  int getCnt(string s) {
        unordered_map<char, int> m;
        int cnt{1}, x;
        
        for(char c : s) {
            x = 2 * cnt;
            if(m[c]) x -= m[c];
            m[c] = cnt;
            cnt = x;
        }
        
        return cnt;
}
    string betterString(string s1, string s2) {
         return getCnt(s2) > getCnt(s1) ? s2 : s1;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str1 >> str2;
        Solution obj;
        string ans = obj.betterString(str1, str2);
        cout << ans << endl;
    }
}

