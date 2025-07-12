#include<iostream>
using namespace std;
int n,k = 0;
int main(){
    cin>>n;
    for (; n > 0; n--)
    {
        for (int i = 0; i <= n; i++)
        {
            k++;
            printf("%02d", k);
        }
        printf("\n");
    }}
