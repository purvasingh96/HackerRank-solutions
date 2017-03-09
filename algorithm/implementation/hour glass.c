#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, a[10], b[10], n, k;
    printf("enter n: ");
    scanf("%d", &n);
    printf("enter array: ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("enter k: ");
    scanf("%d", &k);
    for(i=0;i<n;i++){
        b[i]=a[(k+i)%n];
    }
    for(i=0;i<n;i++){
        printf("%d", b[i]);
    }
    return 0;

}
