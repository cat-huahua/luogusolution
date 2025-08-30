#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
#define N 2000001

char arr[N];
int t, n;
double a;
void press()
{
    int j = 0;
    for (int i = 1; i <= t; i++)
    {
        j = (int)floor(a * i);
        arr[j] = (arr[j] + 1) % 2;
    }
}
int main()
{
    cin >> n;
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; i++)
    {
        cin >> a >> t;
        press();
    }
    for (int i = 1; i < N; i++)
    {
        if (arr[i])
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}