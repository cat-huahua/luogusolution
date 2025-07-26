#include <iostream>
using namespace std;

int isl(int i)
{
    if (i % 400 == 0)
    {
        return true;
    }
    if (i % 4 == 0)
    {
        if (i % 100 != 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int mi, ma, A[3000], i, z;
    cin >> mi >> ma;

    for (z = 0, i = mi; i <= ma; i++)
    {
        if (isl(i))
        {
            z++;
            A[z] += i;
        }
    }
    cout << z << endl;
    for (i = 0, i < z, i++)
    {
        cout << A[i];
    }
    return 0;
}
