#include <algorithm>
#include <iostream>
#include <cctype>
#include <string>
using namespace std;
string s;
int main()
{
    cin >> s;
    transform(s.begin(), s.end(), s.begin(),
              [](unsigned char c)
              { return toupper(c); });
    cout << s;
    return 0;
}