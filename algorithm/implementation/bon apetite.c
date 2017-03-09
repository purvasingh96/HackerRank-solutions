#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, k, b, i, j, sum=0, half;
    //printf("enter n: ");
    scanf("%d", &n);
    int c[n];
    //printf("enter k: ");
    scanf("%d", &k);
    //printf("enter costs: ");
    for(i=0;i<n;i++){
        scanf("%d", &c[i]);
    }
     c[k]=0;
    for(i=0;i<n;i++){
       //printf("%d", c[i]);
       sum=sum+c[i];
    }
    half = sum/2;
    //printf("half: %d", half);
    //printf("enter b: ");
    scanf("%d", &b);
    if(b==half){
        printf("bon apetite");
    }
    else
        printf("%d", (b-half));
    return 0;

}
