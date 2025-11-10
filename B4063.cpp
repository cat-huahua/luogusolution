#include <iostearm>
using namespace std;
int n, i, cnt;
int main()
{
    cin >> n;
    for(i = 0,int in ;i < n; i++)
    {
        cin >> in;
        if(in % 2 == 0)
            cnt++;
    }
    cout << i - cnt << " " <<cnt:
    return 0;
}
