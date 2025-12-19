#include <iostream>
#include <cmath>
using namespace std;
int n,ans;
int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        for(int j = i;j <= n;j++)
        {
            int c = (int) sqrt(i*i+j*j);
            if(c <= n && i*i + j*j == c*c)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}
