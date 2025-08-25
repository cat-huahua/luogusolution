#include <iostream>
using namespace std;
int n, m, A[1000000000];

int bfind(int c)
{
    int b = 0, e = n, i, r;
    r = -2;
    while (b < e)
    {
        i = (b + e) / 2;

        if (A[i] == c)
        {
            r = i;
        }
        if (A[i] >= c)
        {
            e = i;
        }
        else
        {
            b = i + 1;
        }
    }
    return r;
}

int main()
{
    int t;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        cout << bfind(t) + 1 << " ";
    }

    return 0;
}