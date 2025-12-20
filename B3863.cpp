#include <iostream>
using namespace std;
const int P = 2, B = 5, R = 3;
int X, Y, Z, Q;
int main()
{
    cin >> X >> Y >> Z >> Q;
    if(Q - X * P - Y * B - Z * R >= 0)
        cout << "Yes" << endl << Q - X * P - Y * B - Z * R << endl;
    else
        cout << "No" << endl << (Q - X * P - Y * B - Z * R) - (Q - X * P - Y * B - Z * R) * 2 << endl;
    return 0;
}
