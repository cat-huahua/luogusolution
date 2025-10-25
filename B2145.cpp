#include<iostream>
using namespace std;
int digits(int a, int r)
{
    int out = 0;
    out = a % 10;
    if (!r)
    {
        return out;
    }
    else
    {
        return digits(a / 10, r - 1);
    }
    
    
}

int main()
{
    int n,k,ans;
    cin >> n >> k;
    ans = digits(n, k - 1);
    cout << ans << endl;
    return 0;
}