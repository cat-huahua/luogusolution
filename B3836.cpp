#include <iostream>
using namespace std;
int x,y,z,n,m,cnt = 0;
int main()
{
    cin >> x >> y >> z >> n >> m;
    for(int i = 0;i <= n / x;i++)
    {
        for(int j = 0;j <= (n - x * i) / y;j++)
        {
            int k = z * (n - x * i - y * j);
            if(i + j + k == m)
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
