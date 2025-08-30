#include <iostream>
#include <cstdio>
using namespace std;
int c;
int l;
int main()
{
    while (1)
    {
        c = getchar();
        if (c == -1)
        {
            break;
        }
        if (c != ' ' && c != '\n')
        {
            l++;
        }
    }
    cout << l;
    return 0;
}