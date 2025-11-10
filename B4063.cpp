#include <iostream>
using namespace std;
int n, i, cnt;
int main()
{
    cin >> n;
    for(int in,i = 0;i < n; i++)
    {
        cin >> in;
        if(in % 2 == 0)
            cnt++;
    }
    cout << n - cnt << " " << cnt <<endl;
    return 0;
}
