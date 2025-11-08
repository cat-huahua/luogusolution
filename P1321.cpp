#include <iostream>
using namespace std;
int fs(string s, string t)
{
    int count = 0;
    int i,j;
    bool flag = false;
    for (i = 0; s[i] != '\0';) 
    {
        flag = false;
        for (j = 0; t[j] != '\0'; j++)
        {
            if (s[i] == t[j])
            {	
		flag = true;
                break;
            }
        }
        if (flag)
        {
	    while(s[i] == t[j] && s[i] != 0){i++;j++;}
	    count++;
        }
	else
	    i++;
    }
    return count;
}
int main()
{
    string m;
    cin >> m;
    cout << fs(m, "boy") << endl
         << fs(m, "girl") << endl;
    return 0;
}
