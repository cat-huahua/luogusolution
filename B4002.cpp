#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
double K,F,C;
int main()
{
    cin >> K; 
    C = K - 273.15;
    F = C * 1.8 + 32;
    if(F > 212.00)
        cout << "Temperature is too high!" << endl;
    else
        // cout << fixed << setprecision(2) << C << " "<< F <<endl;
        printf("%.2lf %.2lf\n",C,F); 
    return 0;
}
