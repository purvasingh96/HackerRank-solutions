#include<stdio.h>
#include<stdlib.h>
int main()
{
     long long t, n, i, result;
    long long value;
    scanf("%lld", &t);
    int m=3;
    while(t>m){
        t=t-m;
        m=m*2;
    }
    printf("%lld", (m-t+1));
    return 0;
}
