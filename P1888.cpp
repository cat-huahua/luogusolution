#include <algorithm>
#include <iostream>
#include <numeric>
using namespace std;
int A[3], g;

int main()
{
    cin >> A[0] >> A[1] >> A[2];
    sort(A, A + 3);
    g = gcd(A[0], A[2]);
    printf("%d/%d\n", A[2] / g, A[0] / g);
    return 0;
}