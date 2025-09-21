#include <iostream>
#include <algorithm>
using namespace std;
#define N 3000
int n, m, Input[N];
int main()
{
    int j, i;
    int min, sum;
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        cin >> Input[i];
    }
    for (i = 0, sum = 0; i < m; i++)
    {
        sum += Input[i];
    }
    min = sum;
    for (i = 0; i < n - m; i++)
    {
        sum = sum - Input[i] + Input[i + m];
        if (sum < min)
        {
            min = sum;
        }
    }
    cout << min << endl;
    return 0;
}