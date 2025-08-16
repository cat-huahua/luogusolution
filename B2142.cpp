#include <iostream>
using namespace std;
int n = 0, o = 0;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
         o += i;
    }
    cout << o;
    return 0;
}