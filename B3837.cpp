#include <iostream>
using namespace std;
int n;
int main()
{
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j <= i;j++)
            cout << (char) ('A' + (i*(i+1)/2 + j) % 26);
        cout << endl;
    }
    return 0;
}
