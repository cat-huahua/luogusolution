#include <iostream>
#include <cstring>
using namespace std;
bool t[10000];
int ts = 0, ls = 0, h = 0, e = 0, tl = 0;
int ct(int head, int end)
{
    for (; head <= end; head++)
    {
        t[head] == false;
    }
    return 0;
}
int main()
{
    cin >> ts >> ls;
    memset(t, 1, ts);
    for (; ls > 0; ls--)
    {
        cin >> h >> e;
        ct(h, e);
    }
    for (int i = 0; i < 10000; i++)
    {
        if (t[i] = true)
        {
            tl += 1;
        }
    }
    cout << tl;
    return 0;
}