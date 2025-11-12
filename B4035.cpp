#include <iostream>
using namespace std;
int n, cnt = 0,in;
int main()
{
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        cin >> in;
        if(in % 9 == 0 && in % 8 != 0)
            cnt++;
    }
    cout << cnt;
    return 0;
}
