// Given a matrix of size N x N. Print the elements of the matrix in the snake like pattern

 >>>>>>>>>>
         |
  <<<<<<<<
  |
   >>>>>>>>>
           |
  <<<<<<<<
                
          


#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
    public:
   
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
         vector<int>res;
        int n=matrix.size();
        int m=matrix[0].size();
        bool travel_left=true;
        
        for(int i=0;i<n;i++)
        {
           if(travel_left){
               for(int j=0;j<m;j++){
                    res.push_back(matrix[i][j]);
               }
            }
                else{
                    for(int j=m-1;j>=0;j--){
                        res.push_back(matrix[i][j]);
                    }   
               }
               travel_left=!travel_left;
        }
        
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.snakePattern(matrix);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
