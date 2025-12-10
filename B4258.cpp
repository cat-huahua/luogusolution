#include <iostream>
using namespace std;
int n,t;
int main()
{
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        cin >> t;
        if(t % 10 >= 5)
            cout << t + (10 - (t % 10)) << endl;
        else
            cout << t - (t % 10) << endl;
    }
    return 0;
}
