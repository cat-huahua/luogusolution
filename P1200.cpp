#include <cstdio>
#define l 10
using namespace std;
int getid()
{
    char s[l];
    int id = 1;
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        id *= (s[i] - 'A' + 1);
    }
    return id % 47;
}

int main()
{

    if (getid() == getid())
    {
        printf("GO\n");
    }
    else
    {
        printf("STAY\n");
    }
    return 0;
}