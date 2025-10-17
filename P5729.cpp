#include <iostream>
#include <string.h>
#define N 21
using namespace std;
int w, x, h, cnt = 0;
bool A[N][N][N];
int main()
{
    int q;
    cin >> w >> x >> h >> q;
    memset(A, 0, sizeof(A));
    for (int i = 1; i < w; i++)
    {
        for (int j = 1; j < x; j++)
        {
            for (int k = 1; k < h; k++)
            {
                A[i][j][k] = 1;
            }
        }
    }
    for (int i = 0; i < q; i++)
    {
        int x1,y1,z1,x2,y2,z2;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        for (int j = x1; j <= x2; j++)
        {
            for (int k = y1; k <= y2; k++)
            {
                for (int l = z1; l <= z2; l++)
                {
                    A[j][k][l] = 0;
                }
            }
        }
    }
    for (int i = 1; i < w; i++)
    {
        for (int j = 1; j < x; j++)
        {
            for (int k = 1; k < h; k++)
            {
                if (A[i][j][k])
                    cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}