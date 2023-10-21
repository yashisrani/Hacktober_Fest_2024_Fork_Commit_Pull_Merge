#include <bits/stdc++.h>
using namespace std;
int powr(int a, int b)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
        {
            res = res * a;
        }
        a = a * a;
        b = b >> 1;
    }
    return res;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << powr(a, b) << endl;
    return 0;
}