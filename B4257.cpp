#include <iostream>
using namespace std;
int n,x,y,cnt;
int main()
{
    cin >> n >> x >> y;
    cnt = n - y / x;
    if(y % x != 0)
        cnt--;
    cout << cnt;
    return 0;
}
