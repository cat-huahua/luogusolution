#include <iostream>
#include <cstring>
using namespace std;
#define N 21

int main()
{
    int n, i, Array[N];
    cin >> n;
    memset(Array, 0, sizeof(Array));
    i = 0;
    Array[0] = 1;
    do
    {
        for (int j = i; j>0 ; j--)
        {
            Array[j] = Array[j]+Array[j-1];
            cout << Array[j] << " ";
        }
        cout << Array[0] << endl;
        i++;
    } while (i < n);
    
    return 0;
}