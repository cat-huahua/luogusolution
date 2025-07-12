#include<iostream>
using namespace std;

int main()
{
    int f,d,n,i;
    cin >>n;
    for(f=1,d=0,i=0;i< n*n ;i++)
    {
        if (d==0) {
            cin >>d;
            f = (f+1)%2;
        }
        else
        {
            d--;
            cout << f;
        }
        if (i+1 % n ==0)
            cout << endl;
    }
    return 0;
}