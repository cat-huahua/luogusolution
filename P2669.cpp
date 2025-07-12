#include<iostream>
using namespace std;
int k,b = 0,p = 0,i = 0;
int main(){
    cin>>k;

    for (i=0,b=0;i < k;i+=p)
    {
        p++;
        b=b+p*p;
    }
    b -= p*(i-k);
    cout<<b;
    return 0;
}