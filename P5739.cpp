#include<bits/stdc++.h>
using namespace std;
int a;
int fact(int n){
    int r = 1;
    for (int i = 0;i<n;i++)
    {
        r*(i+1);
    }
    return r;
}
int main(){
    cin>>a;
    int r = fact(a);
    cout<<r;
    return 0;
}
