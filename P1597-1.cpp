#include <iostream>
using namespace std;
string s;
int A[4] = {0,0,0,0};
int* getaddr(char c)
{
  if(c>='a' && c <='c') return A+(c-'a');
  else
  {
    A[3] = c-'0';
    return A+3;
  }
}
int main()
{
    int *t,*u;
    cin >> s;
    for(int i = 0;s[i] != '\0';i+=5)
    {
       t = getaddr(s[i]);
       u = getaddr(s[i+3]);
       *t = *u;
    }
    cout << A[0] << " " << A[1] << " " << A[2] << endl;
    return 0;
}
