//Consider a directed graph whose vertices are numbered from 1 to n. There is an edge from a vertex i to a vertex j if and only if either j = i + 1 or j = 3 * i. The task is to find the minimum number of edges in a path from vertex 1 to vertex n.



#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:
    int minimumStep(int n){
        int cnt = 0;
        while(n != 1){
            if(n%3 == 0){
                n = n/3;
                cnt++;
            }else{
                n--;
                cnt++;
            }
        }
        return cnt;
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.minimumStep(n) << endl;
    }
    return 0; 
} 
