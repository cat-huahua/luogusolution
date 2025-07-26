#include <iostream>
#include <cmath>
using namespace std;
int is_prime(int din)
{
    if (din == 1)
    {
        return 0;
    }
    
    for (int i = 2; i <= sqrt(din); i++)
    {
        if (din % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int l, ip;
    cin >> l;
    for (int j = 0; j < l; j++)
    {
        cin >> ip;
        if (is_prime(ip))
        {
            cout << ip << " ";
        }
    }
    return 0;
}