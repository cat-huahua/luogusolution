#include <iostream>
using namespace std;
int A[256], cnt = 0, c;
int main()
{
    A['a'] = 1;
    A['b'] = 2;
    A['c'] = 3;
    A['d'] = 1;
    A['e'] = 2;
    A['f'] = 3;
    A['g'] = 1;
    A['h'] = 2;
    A['i'] = 3;
    A['j'] = 1;
    A['k'] = 2;
    A['l'] = 3;
    A['m'] = 1;
    A['n'] = 2;
    A['o'] = 3;
    A['p'] = 1;
    A['q'] = 2;
    A['r'] = 3;
    A['s'] = 4;
    A['t'] = 1;
    A['u'] = 2;
    A['v'] = 3;
    A['w'] = 1;
    A['x'] = 2;
    A['y'] = 3;
    A['z'] = 4;
    A[' '] = 1;
    while ((c = getchar()) != EOF)
    {
        cnt += A[c];
    }
    cout << cnt << endl;
    return 0;
}