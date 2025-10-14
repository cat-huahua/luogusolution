#include <iostream>
using namespace std;
string s;
int n, cnt = 0, c = 1;
int main()
{
    cin >> n;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'v' && s[i + 1] == 'k')
        {
            cnt++;
        }
        if (s[i] == 'v' && s[i + 1] == 'v', c > 0)
        {   cnt++;
            c--;
        }
    }

    cout << cnt << endl;

    return 0;
}