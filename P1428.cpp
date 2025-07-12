#include <iostream>
using namespace std;

int main()
{
    int A[100], n, p;
    int i, j;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
        for (j = 0, p = 0; j < i; j++)
        {
            if (A[j] < A[i])
            {
                p++;
            }
        }
        cout << p << " ";
    }
    return 0;
}
