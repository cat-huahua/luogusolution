#include <iostream>
using namespace std;
int P[10000], Len = 0;

bool IsPrime(int p)
{
    for (int i = 0; i < Len && P[i] < p; i++)
    {
        if (p % P[i] == 0)
        {
            return false;
        }
    }
    return true;
}

void GPrime(int N)
{
    for (int i = 2; i <= N; i++)
    {
        if (IsPrime(i))
        {
            P[Len] = i;
            Len++;
        }
    }
}

struct Pair
{
    int x, y;
};

Pair A;

Pair Goldbach(int Num)
{
    for (int i = 0; i < Len; i += 2)
    {
        if (IsPrime(Num - P[i]))
        {
            A.x = P[i];
            A.y = Num - P[i];
            return A;
        }
    }
    return A;
}

int main()
{
    int N;
    cin >> N;
    GPrime(N);
    for (int i = 4; i <= N; i += 2)
    {
        Goldbach(i);
        printf("%d+%d=%d\n", i, A.x,A.y);
    }

    return 0;
}