// Write a program to find the transpose of a square matrix of size N*N. Transpose of a matrix is obtained by changing rows to columns and columns to rows.


#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
    public:  

    void transpose(vector<vector<int> >& matrix, int n)
    { 
       
        int  m = matrix[0].size();
        for(int i = 0 ; i < n-1 ; i++){
            for(int j = i+1 ; j < m ; j++){
                swap(matrix[i][j] , matrix[j][i]);
                
            }
        }
    }
};

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n,vector<int>(n)); 

        for(int i=0; i<n; i++)
        {
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.transpose(matrix,n);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
