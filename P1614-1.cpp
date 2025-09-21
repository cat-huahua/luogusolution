#include <iostream>
#include <algorithm>
using namespace std;
#define N 3000
int n, m, Input[N], Arr[N];
int main()
{
    int j, i;
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        cin >> Input[i];
    }
    for (i = 0; i < n - m + 1; i++)
    {
        for (j = 0, Arr[i] = 0; j < m; j++)
        {
            Arr[i] += Input[i + j];
        }
    }
    cout << *min_element(Arr, Arr + n - m + 1) << endl;
    return 0;
}