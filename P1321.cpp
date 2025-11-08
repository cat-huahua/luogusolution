#include <iostream>
using namespace std;
int fs(string s, string t)
{
    int count = 0;
    bool flag = false;
    for (int i = 0; s[i] != '\0'; i++)
    {
        for (int j = 0; t[j] != '\0'; j++)
        {
            flag = false;
            if (s[i] == t[j])
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string m;
    cin >> m;
    cout << fs(m, "boy") << endl
         << fs(m, "girl") << endl;
    return 0;
}