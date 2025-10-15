#include <iostream>
using namespace std;
string s;
int n, cnt = 0;

int main()
{
    cin >> n;
    cin >> s;

    // Count initial VK substrings
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'V' && s[i + 1] == 'K')
        {
            cnt++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        char original = s[i];
        for (char c : {'V', 'K'})
        {
            if (c == original) continue;
            s[i] = c;
            int tempCnt = 0;
            for (int j = 0; j < n - 1; j++)
            {
                if (s[j] == 'V' && s[j + 1] == 'K')
                {
                    tempCnt++;
                }
            }
            if (tempCnt > cnt)
            {
                cnt = tempCnt;
            }
        }
        s[i] = original;
    }

    cout << cnt << endl;
    return 0;
}