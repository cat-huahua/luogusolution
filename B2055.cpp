#include<bits/stdc++.h>
using namespace std;
int n;
double sum,t;
int main(){
    cin>>n;
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        sum = sum + t;
    }
    printf("%.4f", sum / n);
}