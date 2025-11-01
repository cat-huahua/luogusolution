#include <iostream>
#include <string.h>
using namespace std;
char news[1000], olds[1000],buf;
int main() {
    scanf("%s", olds);
    for (int i = strlen(olds)-1; i >= 0; i--)
    {
        news[strlen(olds)-1-i] = olds[i];
    }
    news[strlen(olds)] = '\0';
    printf("%s", news);
    return 0;
}