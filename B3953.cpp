#include <iostream>
using namespace std;
int a;
int main()
{
    cin >> a;
    for(int i = 1;i <= a;i++)
    {
        if(a % i == 0)
            cout << i <<endl;
    }
    return 0; 
}
