#include <iostream>
#include <math.h>
using namespace std;
int n,k = 1;
int f(int In)
{
    return 2*(In+1);
}
int main()
{
    cin >> n;
    for(int i = 1;i < n;i++)
    {
        k=f(k);
    }
    cout << k << endl;
    return 0;
}