#include <iostream>
#include <string>
#include <cctype>
using namespace std;
string s;
int i;
void incrementChars(string &s, int n)
{
    for (char &c : s)
    {
        if (islower(c))
        {
            // Handle lowercase letters (a-z)
            c = 'a' + (c - 'a' + n) % 26;
        }
        else if (isupper(c))
        {
            // Handle uppercase letters (A-Z)
            c = 'A' + (c - 'A' + n) % 26;
        }
        else if (isdigit(c))
        {
            // Handle digits (0-9)
            c = '0' + (c - '0' + n) % 10;
        }
    }
}

int main()
{
    cin >> i;
    cin >> s;
    incrementChars(s, i);
    cout << s;
    return 0;
}