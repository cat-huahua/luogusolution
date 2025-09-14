#include <iostream>
#include <math.h>
using namespace std;
int Array[1000][4], N, Cnt;
int cmp(int a, int b, int c)
{
    if (abs(a - b) <= c)
    {
        return 1;
    }
    return 0;
}
int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> Array[i][j];
        }
        Array[i][3] = Array[i][0] + Array[i][1] + Array[i][2];
    }
    Cnt = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (cmp(Array[i][3], Array[j][3], 10) && cmp(Array[i][0], Array[j][0], 5) && cmp(Array[i][1], Array[j][1], 5) && cmp(Array[i][2], Array[j][2], 5))
            {
                Cnt++;
            }
        }
    }
    cout << Cnt << endl;
    return 0;
}