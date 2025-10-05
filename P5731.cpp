/*
# P5731 【深基5.习6】蛇形方阵

## 题目描述

给出一个不大于 $9$ 的正整数 $n$，输出 $n\times n$
的蛇形方阵。

从左上角填上 $1$ 开始，顺时针方向依次填入数字，如同样例所示。注意每个数字有都会占用 $3$ 个字符，前面使用空格补齐。

## 输入格式

输入一个正整数 $n$，含义如题所述。

## 输出格式

输出符合题目要求的蛇形矩阵。

## 输入输出样例 #1

### 输入 #1

```
4
```

### 输出 #1

```
  1  2  3  4
 12 13 14  5
 11 16 15  6
 10  9  8  7
```

## 说明/提示

数据保证，$1 \leq n \leq 9$。
*/
#include <iostream>
#include <cstring>
using namespace std;
int n, A[9][9], d = 0;
int Di[] = {0, 1, 0, -1};
int Dj[] = {1, 0, -1, 0};

bool iswall(int i, int j)
{
    if (i < 0 || j < 0 || i >= n || j >= n || A[i][j] != 0)
        return 1;
    else
        return 0;
}

int main()
{
    cin >> n;
    memset(A, 0, sizeof(A));
    int i = 0, j = 0, x, y;
    for (int k = 1; k <= n * n; k++)
    {
        A[i][j] = k;
        x = i + Di[d];
        y = j + Dj[d];
        if (iswall(x, y))
        {
            d = (d + 1) % 4;
        }
        i = i + Di[d];
        j = j + Dj[d];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
