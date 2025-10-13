#include <map>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int a, b, c;
char ch1, ch2, ch3;
map<char, int> dict = {
    {'A', 0},
    {'B', 0},
    {'C', 0}};

int main()
{
    cin >> a >> b >> c;

    if (a > b)
    {
        swap(a, b);
    }
    if (a > c)
    {
        swap(a, c);
    }
    if (b > c)
    {
        swap(b, c);
    }
    dict['A'] = a;
    dict['B'] = b;
    dict['C'] = c;
    cin >> ch1 >> ch2 >> ch3;
    cout << dict[ch1] << " " << dict[ch2] << " " << dict[ch3] << endl;
    return 0;
}