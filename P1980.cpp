#include<iostream>
using namespace std;
int n,x,c=0;
int main(){
    cin>>x>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j/=10){
            if(j%10==x){
                c++;
            }
        }
    }
    cout<<c;
    return 0;
}   