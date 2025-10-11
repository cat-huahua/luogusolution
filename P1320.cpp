#include <cstdio>
using namespace std;
int N = 0, C = 0;
char A[200][200], Sta = 0, temp;
int main()
{
    while (scanf("%s", A[N]) != EOF)
    {
        N++;
    }
    printf("%d ", N);
    for (int i = 0; i < N * N; i++)
    {
        temp = A[i / N][i % N];
        if (temp == Sta)
        {
            C++;
        }
        else
        {
            printf("%d ", C);
            Sta = temp;
            C = 1;
        }
    }
    printf("%d ", C);
    printf("\n");
    return 0;
}