#include <iostream>
using namespace std;
int n, m, k, x, y, o,p, arr[10000];
int main()
{
    cin >> n >> m >> k;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        arr[(x-1)*10+(y-1)] = 1;
    }
    for (int i = 0; i < k; i++)
    {
        cin >> o >> p;
        arr[(o-1)*10+(p-1)] = 1;
    }
    
    return 0;
}