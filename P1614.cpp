#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
#define N 3000
int n, m, Input[N], Arr[N], cnt = -1;
int main()
{
    cin >> n >> m;
    memset(Arr, 0, sizeof(Arr));
    memset(Input, 0, sizeof(Input));
    for (int i = 0; i < n; i++)
    {
        cin >> Input[i];
    }
    for (int i = 0; i < n - m + 1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            Arr[i] += Input[i + j];
        }
        cnt++;
    }
    cout << *min_element(Arr, Arr + cnt) << endl;
    return 0;
}