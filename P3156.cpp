#include <iostream>
using namespace std;
int a[2000000], n, m;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
    {
        int ai;
        cin >> ai;
        cout << a[ai] << endl;
    }
    return 0;
}