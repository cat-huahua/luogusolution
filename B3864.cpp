#include <iostream>
using namespace std;
int k,L,R,cnt = 0;
int main()
{
    cin >> k >> L >> R;
    for(L;L <= R;L++)
    {
         if(L % k == 0)
             cnt += L;
    }
    cout << cnt << endl;
    return 0;
}
