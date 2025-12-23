#include <iostream>
using namespace std;
int n;
int main()
{
    int c=0;
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j <= i;j++)
        { 
            cout << (char) ('A' + c);
            c = (c+1)%26;
        }
        cout << endl;
    }
    return 0;
}
