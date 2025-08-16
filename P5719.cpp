#include<iostream>
using namespace std;
int n,k,ax = 0,bx = 0;
double a = 0,b = 0;
int main(){
    cin>>n>>k;
    for (int i = 1; i <= n; i++){
        if (i % k == 0){
            a+=i;
            ax++;
        }
        else{
            b += i;
            bx++;
        }    }    
    printf("%.1f %.1f",a/ax,b/bx);
    return 0;
}
