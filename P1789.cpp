#include <iostream>
#include <cstring>

using namespace std;
int n, m, k, x, y, o, p, ans = 0, arr[10000];

int abs(int a)
{
    if (a < 0)
        return -a;
    return a;
}

void lightup(int a, int b)
{
    if (a >= 0 && a < n && b >= 0 && b < n)
        arr[a * n + b] = 1;
}

int put(int c, int d, bool e)
{
    if (e)
    {
        for (int i = -2; i <= 2; i++)
            for (int j = -2; j <= 2; j++)
                if (abs(i) + abs(j) <= 2)
                    lightup(c + i, d + j);
    }
    else
    {
        for (int i = -2; i <= 2; i++)
            for (int j = -2; j <= 2; j++)
                lightup(c + i, d + j);
    }
    return 0;
}
int main()
{
    int i;
    cin >> n >> m >> k;
    memset(arr, 0, sizeof(arr));
    for (i = 0; i < m; i++)
    {
        cin >> x >> y;
        x = x - 1;
        y = y - 1;
        put(x, y, true);
    }
    for (i = 0; i < k; i++)
    {
        cin >> o >> p;
        o = o - 1;
        p = p - 1;
        put(o, p, false);
    }
    for (ans = 0, i = 0; i < n * n; i++)
        if (arr[i] == 0)
            ans++;
    cout << ans << endl;
    return 0;
}