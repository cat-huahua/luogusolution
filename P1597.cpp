#include <iostream>
using namespace std;
int a = 0,b = 0,c = 0;
string s;
int getnum(int i)
{
    #define findc s[i+3]
    if(findc >= '0' && findc <= '9')
    {
    	return findc - '0';
    }
    else
    {
	if(findc == 'a')
	    return a;
        if(findc == 'b')
	    return b;
	if(findc == 'c')
	    return c;
    }
    return 0;
}
int main()
{
    cin >> s;
    for(int i = 0;s[i] != '\0';i+=5)
    {
	if(s[i] == 'a')
	    a = getnum(i);
        if(s[i] == 'b')
	    b = getnum(i);
	if(s[i] == 'c')
	    c = getnum(i);

    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}
