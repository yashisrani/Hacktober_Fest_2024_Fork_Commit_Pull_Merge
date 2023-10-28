#include "bits/stdc++.h"
#define MAX 1
#define ll long long
ll mod = (ll)pow(10,9)+7;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define test int t; cin>>t; while(t--)
#define for_fwd(i,n) for(int i=0;i<n;i++)
using namespace std;
class Solution{
	public:
	//vector<vector<int>> a;
	int vis[1001][1001]={{0}},a[1001][1001];
	int numIslands(vector<vector<char>>& grid){
		int n=grid.size(),m=grid[0].size(),i,j,v=0;
		for_fwd(i,n){
			for_fwd(j,m){
                if(grid[i][j]=='.')
				a[i][j]=1;
                else a[i][j]=0;
			}
		}
		for_fwd(i,n){
			for_fwd(j,m){
				if(a[i][j]==1&&!vis[i][j]){
					dfs(i,j,n,m);
					v++;
					//cout<<i<<j<<endl;
				}
			}
		}
		return v;
	}
	void dfs(int x,int y,int n,int m){
		vis[x][y]=true;
	if(ischeck(x+1,y,n,m))dfs(x+1,y,n,m);
	if(ischeck(x,y+1,n,m))dfs(x,y+1,n,m);
	if(ischeck(x-1,y,n,m))dfs(x-1,y,n,m);
	if(ischeck(x,y-1,n,m))dfs(x,y-1,n,m);/*
	if(ischeck(x-1,y-1,n,m))dfs(x-1,y-1,n,m);
	if(ischeck(x+1,y+1,n,m))dfs(x+1,y+1,n,m);
	if(ischeck(x+1,y-1,n,m))dfs(x+1,y-1,n,m);
	if(ischeck(x-1,y+1,n,m))dfs(x-1,y+1,n,m);*/
	}
	bool ischeck(int x,int y,int n,int m){
		if(a[x][y]==1&&!vis[x][y]&&(x>=0&&x<n)&&(y>=0&&y<m))return true;
		return false;
	}
};
int main() {
	IOS;
		int i,n,m,j;
		cin>>n>>m;
		vector<vector<char>> a(n,vector<char>(m,'#'));
		for_fwd(i,n){
			for_fwd(j,m){
				cin>>a[i][j];
			}
		}
		Solution obj;
		int ans=obj.numIslands(a);
		cout<<ans<<endl;
	
	return 0;
}
//output : 1 2 3
