#include <bits/stdc++.h>
#define int long long 
using namespace std;
const int mod = 1e9+7;
int multiply(int a, int b,int c)
{
    int res = 0;
    while (b)
    {
        if (b & 1)
        {
            res = res + a;
            res%=mod;
        }
        a = 2*a;
        a%=mod;
        b = b >> 1;

    }
    return res;
}
int32_t main()
{
    int a, b;
    cin >> a >> b;
    cout << multiply(a, b,mod) << endl;
    return 0;
}