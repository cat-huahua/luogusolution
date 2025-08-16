#include <iostream>
using namespace std;
int A[100], t, n;

int main()
{
    for (n = 0, t = 1; t != 0; n++)
    {
        cin >> t;
        A[n] = t;
    }
    for (n -= 2; n >= 0; n--)
    {
        cout << A[n] << " ";
    }
}
