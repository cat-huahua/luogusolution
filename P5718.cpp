#include<iostream>
using namespace std;
int a,b,s;
int main(){
    cin>>a;
    s = 1000;
    for ( int i = 0 ; i < a; i++){
        cin>>b;
        if(b < s){
            s = b;
        }}
    cout<<s;
}