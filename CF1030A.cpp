#include <iostream>
using namespace std;
int n;
bool t;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t == 1)
        {
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
    return 0;
}