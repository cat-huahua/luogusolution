#include <bits/stdc++.h>
using namespace std;
int a;
int fact(int n)
{
    int r = 1;
    for (int i = 0; i < n; i++)
    {
        r *= (i + 1);
    }
    return r;
}
int main()
{
    cin >> a;
    int ans = fact(a);
    cout << ans << endl;
    return 0;
}