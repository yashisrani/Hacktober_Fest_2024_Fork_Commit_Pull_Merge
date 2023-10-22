#include <iostream>
#include <vector>
using namespace std;

int max(int a, int b)
{
    return a > b ? a : b;
}

int knapsack(int n, int w, vector<int>& wt, vector<int>& pt)
{
    vector<vector<int>> mem(n + 1, vector<int>(w + 1));
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0)
                mem[i][j] = 0;
            else if (wt[i - 1] <= j)
                mem[i][j] = max(mem[i - 1][j], pt[i - 1] + mem[i - 1][j - wt[i - 1]]);
            else
                mem[i][j] = mem[i - 1][j];
        }
    }
    return mem[n][w];
}

int main()
{
    int n, w;
    cout << "Enter the no of weights : ";
    cin >> n;
    cout << "Enter the maximum capacity : ";
    cin >> w;
    vector<int> wt(n), pt(n);
    cout << "Enter the weights and profits : ";
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i] >> pt[i];
    }
    cout << "The maximum profit : " << knapsack(n, w, wt, pt);
    return 0;
}