#include <iostream>
using namespace std;
int n, m, A[1000000];

int bfind(int c)
{

}

int main()
{
    int t;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        cout << bfind(t) + 1 << " ";
    }

    return 0;
}