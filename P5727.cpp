#include <iostream>
using namespace std;
int A[100], n, c;
int main()
{
    cin >> n;
    A[0] = n;
    for (c = 1; n > 1; c++)
    {
        if (n % 2 != 0)
        {
            n = n * 3 + 1;
        }
        else
        {
            n /= 2;
        }
        A[c] = n;
    }
    for (c -= 1; c >= 0; c--)
    {
        cout << A[c] << " ";
    }


    return 0;
}