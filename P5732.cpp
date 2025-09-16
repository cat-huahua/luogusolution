#include <iostream>
using namespace std;
int n, Array[20][20];
int main()
{
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        Array[i][0] = 1;
        cout << Array[i][0] << " ";
        for (int j = 1; j <= i; j++)
        {
            Array[i][j] = Array[i - 1][j] + Array[i - 1][j - 1];
            cout << Array[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}