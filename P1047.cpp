#include <iostream>
#include <cstring>
using namespace std;
bool t[10001];

int ct(int head, int end)
{
    for (; head <= end; head++)
    {
        t[head] = false;
    }
    return 0;
}

int main()
{
    int ts = 0, ls = 0, h = 0, e = 0, tl = 0;

    cin >> ts >> ls;
    memset(t, 1, ts+1);
    for (; ls > 0; ls--)
    {
        cin >> h >> e;
        ct(h, e);
    }

    for (int i = 0; i <= ts; i++)
    {
        if (t[i] == true)
        {
            tl += 1;
        }
    }
    cout << tl;
    return 0;
}