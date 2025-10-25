#include <iostream>
using namespace std;
int N, Ans;
bool Flag = false;
int main()
{
    cin >> N;
    if (N < 0)
    {
        Flag = true;
        N = -N;
    }

    for (int i = N; i > 0; i /= 10)
    {
        Ans = Ans * 10 + (i % 10);
    }
    if (Flag)
        Ans = -Ans;
    cout << Ans << endl;
    return 0;
}