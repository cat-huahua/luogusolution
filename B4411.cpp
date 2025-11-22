#include <iostream>
using namespace std;
int n,cnt = 0;
bool samed(int num)
{
    int d = num % 10;
    for(int i = num;i != 0;i /= 10)
    {
        if(d != i % 10)
            return false;
    }
    return true;
}
int main()
{
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        if(samed(i))
            cnt++;
    }
    cout << cnt << endl;
}
