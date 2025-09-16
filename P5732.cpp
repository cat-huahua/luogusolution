#include <iostream>
using namespace std;
int n, Array[20][20];
int main()
{
    cin >> n;
    cout << 1 << endl;
    Array[0][0] = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            Array[i][j] = Array[i - 1][j] + Array[i][j - 1];
            cout << Array[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}