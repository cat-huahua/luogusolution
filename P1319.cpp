#include <iostream>
using namespace std;
int n, d, t;
int flag = 1;
int main()
{
    cin >> n;
    for (int i = 0; i < n * n;)
    {
        cin >> d;
        t = d;
        if (flag)
            flag = 0;
        else
            flag = 1;
        for (; d > 0; d--)
        {
            i++;
            if (i % n == 0)
            {
                cout << flag << endl;
            }
            else
            {
                cout << flag;
            }
        }
    }
    return 0;
}
