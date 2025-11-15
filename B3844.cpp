#include <iostream>
using namespace std;
int n;
int main()
{
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        for(int j = i;j < i + n;j++)
            printf("%c",'A' + (j % 26));
        cout << endl;
    }
    return 0;
}
