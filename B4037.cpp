#include <iostream>
using namespace std;
int m;
int main()
{
    cin >> m;
    cout << '+';
    for(int i = 0;i < m-2;i++)
        cout << '-';
    cout << '+' << endl;
    for(int i = 0;i < m-1;i++)
    {
        cout << '+';
        for(int j = 1;j < m-1;j++)
        {
            if(j - 1 == i)
                cout << '+';
            else
                cout << '-';
        }
        cout << '+' << endl;
    }
    return 0;
}
