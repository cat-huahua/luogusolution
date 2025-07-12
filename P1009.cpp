#include<cstdio>

#define N 100


int a[N];
int sum[N];

void mulsum(int n) {
    int i,j,x,g;

    for(i=0;i<N;i++) a[i] = 0,sum[i]=0;
    a[0]=1;
    for(x=1;x<=n;x++) {
        // mul
        g = 0;
        for(i=0;i<N;i++) {
            a[i] = a[i]*x+g;
            g = a[i] /10;
            a[i] = a[i] %10;
        }
        // sum
        g = 0;
        for(i=0;i<N;i++) {
            sum[i] += a[i] + g;
            g = sum[i] /10;
            sum[i] = sum[i] %10;
        }
    }
}

void printsum() {
    int i=N-1;
    while(sum[i]==0) i--;
    for(;i>=0; i--)
        printf("%d",sum[i]);
}


int main() {
    int n;
    scanf("%d",&n);
    mulsum(n);
    printsum();
}
