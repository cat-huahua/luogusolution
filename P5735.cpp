#include <iostream>
#include <cmath>
using namespace std;
double dis(double xa, double ya, double xb, double yb)
{
    return sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
}
int main()
{
    double x1, y1, x2, y2, x3, y3,d = 0;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    d += dis(x1,y1,x2,y2);
    d += dis(x2,y2,x3,y3);
    d += dis(x3,y3,x1,y1);
    printf("%0.2lf",d);
    return 0;
}