#include<iostream>
using namespace std;
int a,i;
int main(){
    cin>>a;
    for (i = 1; a > 1;a/=2){
        i++;
    }
    cout<<i;
    return 0;
}
